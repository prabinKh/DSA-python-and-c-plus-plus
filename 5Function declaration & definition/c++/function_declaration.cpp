// 1_function_prototype.cpp
#include <iostream>
using namespace std;

// Function Prototype (Declaration)
void greet();
int multiply(int x, int y);

int main() {
    greet();                        // Function call
    cout << "5 * 7 = " << multiply(5, 7) << endl;
    return 0;
}

// Function Definition
void greet() {
    cout << "Hello from function!" << endl;
}

int multiply(int x, int y) {
    return x * y;
}