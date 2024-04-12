//
// Created by localuser on 4/12/24.
//

#include "SecureCustomArray.h"

template<typename T>
T &SecureCustomArray<T>::operator[](int index) {
    if (index >= CustomArray<T>::_size or index < 0) {
        throw std::out_of_range("");
    }
    return CustomArray<T>::_arr[index];
}


