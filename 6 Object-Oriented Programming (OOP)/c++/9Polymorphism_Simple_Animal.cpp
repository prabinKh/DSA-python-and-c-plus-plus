#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function (for runtime polymorphism)
    virtual void sound() {
        cout << "Some generic animal sound...\n";
    }
    
    virtual ~Animal() {} // Always use virtual destructor in base class
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof! (Dog)\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow! (Cat)\n";
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "Moo Moo! (Cow)\n";
    }
};

int main() {
    Animal* ptr;

    Dog d;
    Cat c;
    Cow w;

    ptr = &d;
    ptr->sound();  // Output: Woof Woof!

    ptr = &c;
    ptr->sound();  // Output: Meow Meow!

    ptr = &w;
    ptr->sound();  // Output: Moo Moo!

    return 0;
}