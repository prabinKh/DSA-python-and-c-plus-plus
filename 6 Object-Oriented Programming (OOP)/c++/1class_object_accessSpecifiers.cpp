#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;

    protected:
    int age;

    private:
    double fees;
    public:
    void displayPublic(){
        cout << "Name"<<name<<"Roll"<<roll<<endl;

    }
    void setPrivateData(){
        fees = f;

    }
    void displayAll(){
        cout <<"Name"<<name<<"Roll"<<roll<<"Age:"<<age<<"fees"<<fees<<endl;

    }
    
}
int main(){
    Student s1;
    s1.name = "John";
    s1.roll = 10;
    s1.age = 20;
    s1.displayPublic();
    s1.setPrivateData(45000,50);
    s1.displayAll();
    return 0;
}