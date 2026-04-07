#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class Customer : public BankAccount {
public:
    void test() {
        cout << "Not Possible since bal is private" << endl;
    }
};

int main() {
    Customer c;

    c.setBalance(5000);  
    c.showBalance();     

    c.test();

    return 0;
}