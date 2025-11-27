// 3_inline_function.cpp
#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Max of 15, 25 = " << max(15, 25) << endl;
    cout << "Square of 5 = " << square(5) << endl;
    return 0;
}