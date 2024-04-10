#include <iostream>
#include "CustomArray.cpp"

using namespace std;

int main() {
    CustomArray<int> array(100);
    CustomArray<int> array2(10);
    array2[0] = 1;
    array = array2;
    for (auto i: array) {
        cout << i << " ";
    }

}