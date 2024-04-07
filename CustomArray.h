//
// Created by localuser on 4/5/24.
//

#ifndef ARRAY_H
#define ARRAY_H


template<typename T>
class CustomArray {
private:
    int _size;
    T *_arr;
    static const int DEFAULT_SIZE = 100;
public:
    ~CustomArray() {delete[] _arr;}
    explicit CustomArray(int sz = DEFAULT_SIZE, const T* copyArray = nullptr);
    CustomArray(CustomArray<T> const &copyArray);
    int size();
    T max();
    T min();
    void sort();
    int find(T value);
    T &operator[](int index);
   //void operator=(CustomArray<T> arr);
    bool operator==(CustomArray<T> arr);
    bool operator!=(CustomArray<T> arr);
};



#endif //ARRAY_H
