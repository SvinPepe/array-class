//
// Created by localuser on 4/5/24.
//

#include "CustomArray.h"
#include "algorithm"


template<typename T>
CustomArray<T>::CustomArray(int sz, const T *copyArray) {
    _size = sz;
    _arr = new T[_size];
    if (copyArray != nullptr) {
        for (int i = 0; i < _size; i++) {
            _arr[i] = copyArray[i];
        }
    }
}

template<typename T>
CustomArray<T>::CustomArray(CustomArray<T> &copyArray) {
    _size = copyArray._size;
    _arr = new T[_size];
    for (int i = 0; i < _size; i++) {
        _arr[i] = copyArray[i];
    }
}

template<typename T>
int CustomArray<T>::size() {
    return _size;
}

template<typename T>
T CustomArray<T>::max() {
    return *std::max_element(_arr, _arr + _size);
}

template<typename T>
T CustomArray<T>::min() {
    return *std::min_element(_arr, _arr + _size);
}

template<typename T>
void CustomArray<T>::sort() {
    std::sort(_arr, _arr + _size);
}


template<typename T>
int CustomArray<T>::find(T value) {
    for (int i = 0; i < _size; i++) {
        if (_arr[i] == value) {
            return i;
        }
    }
    return -1;
}

template<typename T>
T &CustomArray<T>::operator[](int index) {
    return _arr[index];
}


template<typename T>
bool CustomArray<T>::operator==(CustomArray arr) {
    if (arr._size != _size) {
        return false;
    }
    for (int i = 0; i < _size; i++) {
        if (_arr[i] != arr[i]) return false;
    }
    return true;
}

template<typename T>
bool CustomArray<T>::operator!=(CustomArray arr) {
    if (arr._size != _size) {
        return true;
    }
    for (int i = 0; i < _size; i++) {
        if (_arr[i] != arr[i]) return true;
    }
    return false;
}

template<typename T>
CustomArray<T>& CustomArray<T>::operator=(CustomArray<T> arr) {
    delete[] _arr;
    _size = arr.size();
    _arr = new T[_size];
    for (int i = 0; i < _size; i++) {
        _arr[i] = arr[i];
    }
    return *this;
}
