#include <iostream>
using namespace std;
void print(const int& x) {
    // int& ref = const_cast<int&>(x); 
    // ref = 42;                       
}
int main() {
    const int a = 10;
    int& ref = const_cast<int&>(a);
    ref = 20;              
}