#include <iostream>
using namespace std;

class Base { virtual void foo() {} };
class Derived : public Base { void bar() {} };

int main() {
    Base* b = new Derived;

    // Safe downcast
    Derived* d = dynamic_cast<Derived*>(b);
    if (d) {
        d;               // success
    }

    Base* b2 = new Base;
    Derived* d2 = dynamic_cast<Derived*>(b2);  // returns nullptr (fail)
}