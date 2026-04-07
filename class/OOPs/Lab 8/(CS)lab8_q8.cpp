#include <iostream>
using namespace std;

class Account {
protected:
    int balance;

public:
    Account(int b) {
        balance = b;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(int b) : Account(b) {}

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    SavingsAccount s(5000);
    s.displayBalance();
    // cout << s.balance; won't work
    return 0;
}