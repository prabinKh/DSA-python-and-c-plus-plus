#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double bal = 0) {
        accountHolder = name;
        balance = bal;
    }

    // Setter (with validation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    // Getters
    double getBalance() const { return balance; }
    string getHolder() const { return accountHolder; }
};

int main() {
    BankAccount acc("Suresh", 5000);
    acc.deposit(2000);
    acc.withdraw(1000);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}