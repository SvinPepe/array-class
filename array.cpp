//
// Created by localuser on 4/5/24.
//

#include "array.h"
#include "algorithm"

void array::_init(int sz, const int *copy_arr) {
    _size = sz;
    _arr = new int[sz];

    if (copy_arr != nullptr) {
        for (int i = 0; i < sz; i++) {
            if (i < sizeof(*copy_arr) / sizeof(copy_arr[0])) {
                _arr[i] = copy_arr[i];
            }else{
                _arr[i] = 0;
            }
        }
    }else{
        for (int i = 0; i < sz; i++) {
            _arr[i] = 0;
        }
    }

}

int array::size() {
    return this->_size;
}

int array::max() {
    return *std::max_element(_arr, _arr + _size);
}

int array::min() {
    return *std::min_element(_arr, _arr + _size);
}

void array::sort() {
    std::sort(_arr, _arr + _size);
}

int array::find(int value) {
    for (int i = 0; i < _size; i++) {
        if (_arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int &array::operator[](int index) {
    return _arr[index];
}

bool array::operator==(array arr) {
    bool flag = 1;
    if (arr.size() == _size) {
        for (int i = 0; i < _size; i++) {
            if (arr[i] != _arr[i]) {
                flag = 0;
            }
        }
    }else{
        flag = 0;
    }

    return flag;
}

bool array::operator!=(array arr) {
    bool flag = 1;
    if (arr.size() == _size) {
        for (int i = 0; i < _size; i++) {
            if (arr[i] != _arr[i]) {
                flag = 0;
            }
        }
    }else{
        flag = 0;
    }

    return !flag;
}

void array::operator=(array arr) {
    _size = arr.size();
    free(_arr);
    _arr = arr._arr;
}
