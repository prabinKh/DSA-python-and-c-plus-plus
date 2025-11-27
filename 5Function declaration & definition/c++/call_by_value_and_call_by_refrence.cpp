// 2_call_by_value_reference.cpp
#include <iostream>
using namespace std;

void byValue(int x, int y) {
    int temp = x; x = y; y = temp;
    cout << "Inside byValue: x=" << x << " y=" << y << endl;
}

void byReference(int &x, int &y) {
    int temp = x; x = y; y = temp;
    cout << "Inside byReference: x=" << x << " y=" << y << endl;
}

int main() {
    int a = 10, b = 20;
    cout << "Before: a=" << a << " b=" << b << endl;

    byValue(a, b);
    cout << "After byValue: a=" << a << " b=" << b << endl;

    byReference(a, b);
    cout << "After byReference: a=" << a << " b=" << b << endl;
    return 0;
}