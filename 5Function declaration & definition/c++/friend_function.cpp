// 7_friend_function.cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;
public:
    Rectangle(double l = 1, double w = 1) : length(l), width(w) {}
    
    // Friend function declaration
    friend void displayArea(Rectangle r);
};

void displayArea(Rectangle r) {
    cout << "Area = " << r.length * r.width << endl;  // Access private members!
}

int main() {
    Rectangle rect(5, 4);
    displayArea(rect);
    return 0;
}