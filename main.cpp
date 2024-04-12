#include <iostream>
#include "SecureCustomArray.cpp"
using namespace std;

int main() {
    SecureCustomArray<int> array(100);
    SecureCustomArray<int> array2(10);
    //array2[100] = 1;
    array = array2;
    for (auto i: array) {
        cout << i << " ";
    }

}