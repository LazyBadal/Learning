#include <iostream>
using namespace std;

class Base
{
public:
    void display(int x)
    {
        cout << "Base display: " << x << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived display()" << endl;
    }
};

int main()
{
    Derived d;

    d.display();         
    d.Base::display(10);    

    return 0;
}