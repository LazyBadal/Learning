#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak(){cout << "Animal Speak...."<<endl;}};

class Dog: public Animal{
    public:
        void speak(){cout << "Dog speak..."<< endl;}};

class Cat: public Animal{
    public:
        void speak(){cout << "Cat speak..."<< endl;}};

class Cow: public Animal{
    public:
        void speak(){cout << "Cow speak..."<< endl;}};

int main()
{
    Animal* a;
    Animal A;
    Dog D;
    Cat C;
    Cow Cw;

    a = &A;
    a->speak();
    a = &D;
    a->speak();
    a = &C;
    a->speak();
    a = &Cw;
    a->speak();
}