// 6_recursion.cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << "Factorial(6) = " << factorial(6) << endl;   // 720
    cout << "Fibonacci(7) = " << fibonacci(7) << endl;   // 13
    return 0;
}