#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    int id;
    char* name;  // For dynamic constructor demo

public:
    // Default Constructor
    Employee() {
        cout << "Default Constructor\n";
        id = 0;
        name = new char[20];
        strcpy(name, "Unknown");
    }

    // Parameterized Constructor
    Employee(int i, const char* n) {
        cout << "Parameterized Constructor\n";
        id = i;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy Constructor
    Employee(const Employee& e) {
        cout << "Copy Constructor\n";
        id = e.id;
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);
    }

    // Dynamic Constructor (uses new)
    Employee(string n) {
        cout << "Dynamic Constructor\n";
        id = 999;
        name = new char[n.length() + 1];
        strcpy(name, n.c_str());
    }

    // Constructor Overloading
    Employee(int i) {
        cout << "Overloaded Constructor (int)\n";
        id = i;
        name = new char[10];
        strcpy(name, "Temp");
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    ~Employee() {
        cout << "Destructor for " << name << endl;
        delete[] name;
    }
};

int main() {
    Employee e1;                    // Default
    Employee e2(10, "Rahul");       // Parameterized
    Employee e3 = e2;               // Copy
    Employee e4("Dynamic Name");    // Dynamic
    Employee e5(55);                // Overloaded

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    return 0;
}