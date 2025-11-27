// 5_function_overloading.cpp
#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "int + int: " << a + b << endl;
}

void add(double a, double b) {
    cout << "double + double: " << a + b << endl;
}

void add(int a, int b, int c) {
    cout << "Three ints: " << a + b + c << endl;
}

int main() {
    add(5, 10);
    add(3.5, 2.5);
    add(1, 2, 3);
    return 0;
}