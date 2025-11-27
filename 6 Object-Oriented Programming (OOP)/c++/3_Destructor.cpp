#include <iostream>
using namespace std;

class Test {
    int* ptr;
public:
    Test() {
        ptr = new int(100);
        cout << "Constructor: Memory allocated\n";
    }

    ~Test() {
        delete ptr;
        cout << "Destructor: Memory deallocated\n";
    }
};

int main() {
    Test t1;
    {
        Test t2;  // t2 destroyed here
    }             // t2 goes out of scope → destructor called
    cout << "Back in main\n";
    return 0;     // t1 destroyed here
}