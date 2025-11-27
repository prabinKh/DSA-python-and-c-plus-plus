// 8_const_function.cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
public:
    Student(string n, int r) : name(n), roll(r) {}
    
    // Const function - promises not to modify object
    void display() const {
        // name = "New";  // ERROR! Cannot modify
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    const Student s("Alice", 101);  // const object
    s.display();  // Only const functions can be called
    return 0;
}