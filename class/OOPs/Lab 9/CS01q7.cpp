#include <iostream>
using namespace std;

class Account{
public:
    virtual void calculateInterest(){cout << "Account Interest" << endl;}};

class SavingsAccount : public Account{
public:
    void calculateInterest() {cout << "Savings Account Interest = 4%" << endl;}};

class CurrentAccount : public Account{
public:
    void calculateInterest() {cout << "Current Account Interest = 1%" << endl;}};

int main(){
    SavingsAccount s; CurrentAccount c;
    Account* a;
    a = &s; a->calculateInterest();
    a = &c; a->calculateInterest();
    return 0;
}