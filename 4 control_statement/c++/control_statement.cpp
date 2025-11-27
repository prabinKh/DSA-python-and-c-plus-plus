#include <iostream>
using namespace std;

int main() {
    cout << "===== C++ Control Statements Demo =====\n\n";

    int choice = 2;
    int num = 7;
    int password = 1234;

    // ========================================
    // 1. Decision Making Statements
    // ========================================

    // 1.1 Simple if
    cout << "1. Simple if:\n";
    if (num > 0) {
        cout << num << " is positive\n\n";
    }

    // 1.2 if-else
    cout << "2. if-else:\n";
    if (num % 2 == 0) {
        cout << num << " is even\n";
    } else {
        cout << num << " is odd\n\n";
    }

    // 1.3 Nested if
    cout << "3. Nested if:\n";
    if (num > 0) {
        cout << num << " is positive\n";
        if (num % 2 == 0) {
            cout << num << " is also even\n";
        } else {
            cout << num << " is also odd\n";
        }
    } else {
        cout << num << " is not positive\n";
    }
    cout << endl;

    // 1.4 if-else-if ladder
    cout << "4. if-else-if ladder (Grade example):\n";
    int marks = 85;
    if (marks >= 90) {
        cout << "Grade A+\n";
    } else if (marks >= 80) {
        cout << "Grade A\n";
    } else if (marks >= 70) {
        cout << "Grade B\n";
    } else if (marks >= 60) {
        cout << "Grade C\n";
    } else {
        cout << "Fail\n";
    }
    cout << endl;

    // 1.5 switch statement
    cout << "5. switch statement:\n";
    cout << "Enter a choice (1-4): ";
    // For demo, we set choice = 2 above
    cout << choice << endl;

    switch (choice) {
        case 1:
            cout << "You chose Option 1: Add\n";
            break;
        case 2:
            cout << "You chose Option 2: Subtract\n";
            break;
        case 3:
            cout << "You chose Option 3: Multiply\n";
            break;
        case 4:
            cout << "You chose Option 4: Divide\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
    cout << endl;

    // ========================================
    // 2. Looping Statements
    // ========================================

    // 2.1 for loop
    cout << "6. for loop (1 to 5):\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 2.2 while loop
    cout << "7. while loop (countdown from 5):\n";
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << " -> Blast off!\n\n";

    // 2.3 do-while loop (executes at least once)
    cout << "8. do-while loop (password check):\n";
    int input;
    do {
        cout << "Enter password (1234 to pass): ";
        cin >> input;  // In real run, you'd type here
        // For demo, let's simulate correct password after 1 wrong try
        static int attempts = 0;
        if (attempts++ == 0) input = 0000;  // wrong first time
        else input = 1234;                  // correct second time
        cout << input << endl;
    } while (input != password);
    cout << "Access Granted!\n\n";

    // 2.4 Nested loops (multiplication table 3x3)
    cout << "9. Nested loops - 3x3 Multiplication Table:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " x " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // ========================================
    // 3. Jump Statements
    // ========================================

    // 3.1 break statement
    cout << "10. break statement (stop at 7):\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            cout << "Found 7! Breaking loop.\n";
            break;
        }
        cout << i << " ";
    }
    cout << endl << endl;

    // 3.2 continue statement
    cout << "11. continue statement (skip even numbers):\n";
    for (int i = 1; i <= 6; i++) {
        if (i % 2 == 0) {
            continue;  // skip rest of loop body for even numbers
        }
        cout << i << " is odd\n";
    }
    cout << endl;

    // 3.3 goto statement (rarely used, but valid)
    cout << "12. goto statement example:\n";
    int n = 1;
start:
    cout << n << " ";
    n++;
    if (n <= 5) {
        goto start;  // jumps back to label 'start'
    }
    cout << "\nLoop ended using goto\n\n";

    cout << "===== End of Control Statements Demo =====\n";
    return 0;
}