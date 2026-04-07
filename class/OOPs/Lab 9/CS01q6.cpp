#include <iostream>
using namespace std;

class Shape{
public:
    virtual float area() = 0;};

class Circle : public Shape
{
    float radius;
public:
    Circle(float r) {radius = r;}
    float area() override {return 3.14 * radius * radius;}};

class Rectangle : public Shape
{ float length, width;
public:
    Rectangle(float l, float w)
    {length = l; width = w;}
    float area(){return length * width;}};

int main()
{
    // Shape S; Giving error

    Shape* s1; Shape* s2;

    Circle c(5); Rectangle r(4, 6);

    s1 = &c; s2 = &r;

    cout << "Circle Area: " << s1->area() << endl;
    cout << "Rectangle Area: " << s2->area() << endl;

    return 0;
}