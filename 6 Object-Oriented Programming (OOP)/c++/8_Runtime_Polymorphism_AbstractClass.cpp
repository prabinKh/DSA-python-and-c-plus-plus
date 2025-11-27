#include <iostream>
using namespace std;

class Shape {  // Abstract class
public:
    virtual void draw() = 0;        // Pure virtual function
    virtual double area() = 0;      // Pure virtual
    virtual ~Shape() {}             // Virtual destructor
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing Circle\n";
    }
    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void draw() override {
        cout << "Drawing Rectangle\n";
    }
    double area() override {
        return length * width;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();           // Runtime polymorphism
        cout << "Area: " << shapes[i]->area() << endl;
    }

    delete shapes[0];
    delete shapes[1];
    return 0;
}