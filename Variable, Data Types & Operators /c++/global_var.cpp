#include <iostream>
using namespace std;

int global_var = 100;


void another_function(){
    cout<< "from another_function::" <<global_var<<endl;

}
int main(){
    cout<< "from main :" << global_var<<endl;
    another_function();
    return 0;
}