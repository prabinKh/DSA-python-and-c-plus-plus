#include <iostream>
using namespace std;

class Calc {
public:
    // Function Overloading
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
    string add(string a, string b) { return a + b; }
};

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Operator Overloading (Binary +)
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Unary -
    Complex operator-() {
        return Complex(-real, -imag);
    }

    // Friend operator <<
    friend ostream& operator<<(ostream& out, const Complex& c);

    // Friend operator + (non-member)
    friend Complex operator+(int x, const Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

Complex operator+(int x, const Complex& c) {
    return Complex(x + c.real, c.imag);
}

int main() {
    Calc c;
    cout << c.add(5, 10) << endl;
    cout << c.add(3.5, 2.7) << endl;
    cout << c.add(string("Hello"), string(" World")) << endl;

    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    cout << "c3 = " << c3 << endl;

    Complex c4 = -c3;
    cout << "Negative: " << c4 << endl;

    Complex c5 = 10 + c1;  // Friend non-member
    cout << "10 + c1 = " << c5 << endl;

    return 0;
}