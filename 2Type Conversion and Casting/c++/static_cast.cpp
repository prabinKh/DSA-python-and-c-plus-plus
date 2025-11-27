#include <iostream>
using namespace std;

int main() {
    double d = 9.99;
    int i = static_cast<int>(d);        // explicit truncation → 9
    cout << i << endl;

    float f = 3.14f;
    int x = static_cast<int>(f);        // ok

    void* ptr = &i;
    int* ip = static_cast<int*>(ptr);   // void* → int*

    // Converting between related types (e.g., enum ↔ int)
    enum Color { RED, GREEN, BLUE };
    Color c = static_cast<Color>(1);    // → GREEN

    // Upcasting in inheritance (always safe)
    // Derived* d = ...;
    // Base* b = static_cast<Base*>(d);   // usually not needed, implicit ok
}