#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- 1. Variable Declaration and Initialization ---
   cout << "--- Variable Declaration and Initialization ---" << endl;

    // Integer variable for whole numbers
    int integer_a = 10;
    int integer_b = 3;
    cout << "Integer a: " << integer_a << ", Integer b: " << integer_b << endl;

    // Floating-point variables for decimal numbers
    double double_c = 15.5;
    float float_d = 2.5f; // 'f' suffix indicates a float literal
    cout << "Double c: " << double_c << ", Float d: " << float_d << endl;

    // Character variable for a single character
    char char_e = 'A';
    cout << "Character e: " << char_e << endl;

    // Boolean variable for true/false values
    bool bool_f = true;
    bool bool_g = false;
    cout << "Boolean f: " << bool_f << " (true), Boolean g: " << bool_g << " (false)" << endl;

    // String variable for text (from the <string> header)
    string string_h = "Hello, C++!";
    cout << "String h: " << string_h << endl;

    // --- 2. Arithmetic Operators ---
    cout << "\n--- Arithmetic Operators ---" << endl;
    int sum = integer_a + integer_b;
    cout << "Addition (10 + 3): " << sum << endl;

    int difference = integer_a - integer_b;
    cout << "Subtraction (10 - 3): " << difference << endl;

    int product = integer_a * integer_b;
    cout << "Multiplication (10 * 3): " << product << endl;

    // Integer division truncates the decimal part
    int int_quotient = integer_a / integer_b;
    cout << "Integer Division (10 / 3): " << int_quotient << endl;

    // Floating-point division retains decimals
    double double_quotient = static_cast<double>(integer_a) / integer_b;
    cout << "Floating-point Division (10 / 3): " << double_quotient << endl;

    int remainder = integer_a % integer_b;
    cout << "Modulus (10 % 3): " << remainder << endl;

    // Increment and Decrement operators
    int increment_var = 5;
    increment_var++; // Post-increment
    cout << "Increment (5++): " << increment_var << endl;

    int decrement_var = 5;
    --decrement_var; // Pre-decrement
    cout << "Decrement (--5): " << decrement_var << endl;

    // --- 3. Assignment Operators ---
    cout << "\n--- Assignment Operators ---" << endl;
    int assign_var = 10;
    assign_var += 5; // assign_var = assign_var + 5
    cout << "Add and assign (10 += 5): " << assign_var << endl;

    assign_var *= 2; // assign_var = assign_var * 2
    cout << "Multiply and assign (15 *= 2): " << assign_var << endl;

    // --- 4. Relational and Logical Operators ---
    cout << "\n--- Relational and Logical Operators ---" << endl;
    bool is_equal = (integer_a == integer_b);
    cout << "Is 10 equal to 3? " << is_equal << " (false)" << endl;

    bool is_greater = (integer_a > integer_b);
    cout << "Is 10 greater than 3? " << is_greater << " (true)" << endl;

    bool logic_and = (integer_a > 5 && integer_b < 5);
    cout << "Logical AND (10 > 5 AND 3 < 5): " << logic_and << " (true)" << endl;

    bool logic_or = (integer_a < 5 || integer_b < 5);
    cout << "Logical OR (10 < 5 OR 3 < 5): " << logic_or << " (true)" << endl;

    bool logic_not = !(integer_a < 5);
    cout << "Logical NOT (!(10 < 5)): " << logic_not << " (true)" << endl;

    return 0;
}
