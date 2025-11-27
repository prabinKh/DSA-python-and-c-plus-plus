#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

// 1. Single Inheritance
class Dog : public Animal {
public:
    void bark() { cout << "Woof!\n"; }
};

// 2. Multilevel Inheritance
class Puppy : public Dog {
public:
    void weep() { cout << "Puppy weeping...\n"; }
};

// 3. Multiple Inheritance (with ambiguity fix using virtual base)
class Flyable {
public:
    void fly() { cout << "Flying high!\n"; }
};

class Swimmable {
public:
    void swim() { cout << "Swimming...\n"; }
};

class Duck : public Animal, public Flyable, public Swimmable {
public:
    void quack() { cout << "Quack Quack!\n"; }
};

// 4. Hierarchical Inheritance
class Cat : public Animal {
public:
    void meow() { cout << "Meow!\n"; }
};

// 5. Hybrid (Combination)
class Penguin : public Animal, public Swimmable {
public:
    void slide() { cout << "Sliding on ice!\n"; }
};

int main() {
    cout << "=== Single & Multilevel ===\n";
    Puppy p;
    p.eat();
    p.bark();
    p.weep();

    cout << "\n=== Multiple Inheritance ===\n";
    Duck d;
    d.eat();
    d.fly();
    d.swim();
    d.quack();

    cout << "\n=== Hierarchical ===\n";
    Cat c;
    c.eat();
    c.meow();

    cout << "\n=== Hybrid ===\n";
    Penguin pg;
    pg.eat();
    pg.swim();
    pg.slide();

    return 0;
}