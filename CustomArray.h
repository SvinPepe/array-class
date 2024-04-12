//
// Created by localuser on 4/5/24.
//

#ifndef ARRAY_H
#define ARRAY_H


#include <iterator>

template<typename T>
class CustomArray {
protected:
    int _size;
    T *_arr;
    static const int DEFAULT_SIZE = 100;
public:
    ~CustomArray() {delete[] _arr;}
    explicit CustomArray(int sz = DEFAULT_SIZE, const T* copyArray = nullptr);
    CustomArray<T>(CustomArray &copyArray);
    int size();
    T max();
    T min();
    void sort();
    int find(T value);
    T* begin() {return _arr;};
    T* end() {return _arr + _size;};

    T &operator[](int index);
    CustomArray<T>& operator=(CustomArray<T> arr);
    bool operator==(CustomArray<T> arr);
    bool operator!=(CustomArray<T> arr);
};



#endif //ARRAY_H
