#include <iostream>
using namespace std;

// Abstract Class (cannot create object directly)
class Calculator {
public:
    // Pure virtual functions (must be implemented by child classes)
    virtual int calculate(int a, int b) = 0;
    virtual void showResult(int result) = 0;

    virtual ~Calculator() {} // Virtual destructor
};

class Addition : public Calculator {
public:
    int calculate(int a, int b) override {
        return a + b;
    }

    void showResult(int result) override {
        cout << "Addition Result = " << result << endl;
    }
};

class Multiplication : public Calculator {
public:
    int calculate(int a, int b) override {
        return a * b;
    }

    void showResult(int result) override {
        cout << "Multiplication Result = " << result << endl;
    }
};

int main() {
    Calculator* calc;

    Addition add;
    Multiplication mul;

    calc = &add;
    int sum = calc->calculate(10, 20);
    calc->showResult(sum);

    calc = &mul;
    int product = calc->calculate(10, 20);
    calc->showResult(product);

    return 0;
}