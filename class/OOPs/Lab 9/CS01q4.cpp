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
    Animal* a1; Animal* a2; Animal* a3;

    Dog D; Cat Ca; Cow Cw;

    a1 = &D; a2 = &Ca; a3 = &Cw;

    Animal* A[3];
    A[0] = a1; A[1] = a2; A[2] = a3;

    for (int i=0;i<3;i++){
        A[i]->speak();   
    }
    return 0;
}