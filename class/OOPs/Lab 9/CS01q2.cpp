#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void speak(){cout << "Animal Speak....";}
};

class Dog: public Animal
{
    public:
        void speak(){cout << "Dog speak...";}
};

int main()
{
    Animal* a;
    Dog D;
    a = &D;
    a->speak();

}   