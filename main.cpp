#include <iostream>
#include "array.h"

using namespace std;

int main() {
    array a(10);
    array b(11);
    array c(11);
    b[0] = 1;
    a = b;

    cout << a.size() << " " << int(a == b);
}