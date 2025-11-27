#include <iostream>
using namespace std;
int main() {
    int i = 10;
    double d = i;        // int → double (safe, widening)
    float f = 3.14f;
    double d2 = f;       // float → double

    char ch = 'A';       // 65 in ASCII
    int x = ch;          // char → int (safe)

    // Arithmetic promotion
    int a = 5;
    double b = 2.5;
    double result = a + b;  // int 'a' promoted to double → 7.5
}