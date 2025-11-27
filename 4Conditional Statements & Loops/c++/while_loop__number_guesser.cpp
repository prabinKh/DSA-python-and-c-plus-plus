#include <iostream>
using namespace std;

int main(){
    int secret_num = 7;
    int guess;

    cout<<" Guess a number between 1 to 10 : ";
    cin>> guess;

    while(guess != secret_num){
        cout<< " Wrong guess . try again : ";
        cin >> guess;
    }
    cout<< "congratulations, you guessed the number ! "<< endl;
    return 0;
}