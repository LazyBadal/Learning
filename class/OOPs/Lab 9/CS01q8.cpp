#include <iostream>
using namespace std;

class Base{
public:
    virtual void show(){cout << "Base show()" << endl;}};

class Derived : public Base{
public:
    void show(){cout << "Derived show()" << endl;}};

int main()
{
    Base b;
    Derived d;
    Base* p = &d;

    b.show();
    d.show();
    p->show();

    return 0;
}