//
// Created by localuser on 4/12/24.
//

#include "CustomArray.h"
#include "CustomArray.cpp"
#ifndef SECUREARRAY_H
#define SECUREARRAY_H
template<typename T>
class SecureCustomArray : public CustomArray<T>{
public:
    explicit SecureCustomArray(int sz = CustomArray<T>::DEFAULT_SIZE, const T* copyArray = nullptr) : CustomArray<T>{sz, copyArray} {};
    SecureCustomArray(SecureCustomArray &copyArray) : CustomArray<T>(copyArray) {};
    T &operator[](int index);
};




#endif //SECUREARRAY_H
