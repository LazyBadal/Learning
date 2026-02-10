#include <iostream>
using namespace std;

class BankAccount{
    double balance;

    public:
        BankAccount(){
            balance = 0;
        }

        int getbal(){return balance;}

        void setbalance(){
            cout << "\nEnter balance: "; cin >> balance;
        }
        void getbalance(){
            cout << "\nBalance = " << getbal();
        }
};

int main(){
    BankAccount acc1;
    acc1.getbalance();
    acc1.setbalance();
    acc1.getbalance();
}