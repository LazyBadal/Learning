#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

class Customer : public BankAccount {
public:
    void showCustomerBalance() {
        cout << "Customer sees balance: " << getBalance() << endl;
    }
};

int main() {
    Customer c;

    c.setBalance(7000);

    cout << "Main sees balance: " << c.getBalance() << endl;

    c.showCustomerBalance();

    return 0;
}