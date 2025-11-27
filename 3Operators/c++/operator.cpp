#include <iostream>
#include <bitset>   
using namespace std;

int main() {
    cout << "=== C++ Operators Demo ===\n\n";

    int a = 10, b = 3;

    cout << "a = " << a << ", b = " << b << "\n\n";

    // 1. Arithmetic Operators
    cout << "1. Arithmetic Operators:\n";
    cout << "a + b  = " << a + b << endl;   // 13
    cout << "a - b  = " << a - b << endl;   // 7
    cout << "a * b  = " << a * b << endl;   // 30
    cout << "a / b  = " << a / b << endl;   // 3  (integer division)
    cout << "a % b  = " << a % b << endl;   // 1
    cout << endl;

    // 2. Relational Operators
    cout << "2. Relational Operators (returns 1 for true, 0 for false):\n";
    cout << "a > b  = " << (a > b) << endl;   // 1
    cout << "a < b  = " << (a < b) << endl;   // 0
    cout << "a >= b = " << (a >= b) << endl;  // 1
    cout << "a <= b = " << (a <= b) << endl;  // 0
    cout << "a == b = " << (a == b) << endl;  // 0
    cout << "a != b = " << (a != b) << endl;  // 1
    cout << endl;

    // 3. Logical Operators
    cout << "3. Logical Operators:\n";
    cout << "(a > 5) && (b < 5) = " << ((a > 5) && (b < 5)) << endl;  // 1
    cout << "(a < 5) || (b < 5) = " << ((a < 5) || (b < 5)) << endl;  // 1
    cout << "!(a == 10)          = " << !(a == 10) << endl;          // 0
    cout << endl;

    // 4. Increment / Decrement
    cout << "4. Increment & Decrement:\n";
    int x = 5;
    cout << "x = " << x << endl;
    cout << "x++   = " << x++ << "  → x becomes " << x << endl;   // post-increment
    cout << "++x   = " << ++x << "  → x becomes " << x << endl;   // pre-increment
    cout << "x--   = " << x-- << "  → x becomes " << x << endl;
    cout << "--x   = " << --x << "  → x becomes " << x << endl;
    cout << endl;

    // 5. Assignment Operators
    cout << "5. Assignment / Compound Assignment Operators:\n";
    int num = 20;
    cout << "num = " << num << endl;
    num += 5;   cout << "num += 5  → " << num << endl;
    num -= 3;   cout << "num -= 3 → " << num << endl;
    num *= 2;   cout << "num *= 2 → " << num << endl;
    num /= 4;   cout << "num /= 4 → " << num << endl;
    num %= 5;   cout << "num %= 5 → " << num << endl;
    cout << endl;

    // 6. Bitwise Operators
    cout << "6. Bitwise Operators (a=10=1010b, b=3=0011b):\n";
    cout << "a & b  = " << (a & b) << "  (" << bitset<8>(a & b) << ")" << endl;  // 2
    cout << "a | b  = " << (a | b) << "  (" << bitset<8>(a | b) << ")" << endl;   // 11
    cout << "a ^ b  = " << (a ^ b) << "  (" << bitset<8>(a ^ b) << ")" << endl;  // 9
    cout << "~a      = " << (~a) << "  (" << bitset<8>(~a) << ")" << endl;       // -11 (two's complement)
    cout << "a << 1 = " << (a << 1) << "  (" << bitset<8>(a << 1) << ")" << endl; // 20
    cout << "a >> 1 = " << (a >> 1) << "  (" << bitset<8>(a >> 1) << ")" << endl; // 5
    cout << endl;

    // 7. Ternary (Conditional) Operator
    cout << "7. Ternary Operator:\n";
    int age = 25;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Age = " << age << " → " << status << endl;

    int max = (a > b) ? a : b;
    cout << "Maximum of a and b = " << max << endl << endl;

    cout << "=== End of Demo ===\n";
    return 0;
}