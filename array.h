//
// Created by localuser on 4/5/24.
//

#ifndef UNTITLED_ARRAY_H
#define UNTITLED_ARRAY_H


#include <cstdlib>

class array {
private:
    int _size;
    int *_arr;
    static const int DEFAULT_SIZE = 100;
    void _init(int sz, const int* copy_arr);

public:
    array(int sz = DEFAULT_SIZE) { _init(sz, nullptr);}
    array(int *copy_arr, int sz = DEFAULT_SIZE) { _init(sz, copy_arr);}
    array(array const &copy_arr) { _init(copy_arr._size, copy_arr._arr);}
    int size();
    int max();
    int min();
    void sort();
    int find(int value);
    int &operator[](int index);
    void operator=(array arr);
    bool operator==(array arr);
    bool operator!=(array arr);
};


#endif //UNTITLED_ARRAY_H
