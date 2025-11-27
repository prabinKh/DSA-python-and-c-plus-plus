// 4_default_arguments.cpp
#include <iostream>
using namespace std;

void printNumber(int n, int times = 1) {  // default = 1
    for(int i = 0; i < times; i++)
        cout << n << " ";
    cout << endl;
}

int main() {
    printNumber(10);        // uses default times=1
    printNumber(20, 5);     // overrides default
    printNumber(30, 3);
    return 0;
}