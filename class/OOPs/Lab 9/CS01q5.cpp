#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw(){
        cout << "Drawing Shape..." << endl;}};

class Circle : public Shape
{
public:
    void draw(){
        cout << "Drawing Circle..." << endl;}};

class Rectangle : public Shape
{
public:
    void draw(){
        cout << "Drawing Rectangle..." << endl;}};

void render(Shape &s) {s.draw();}

int main()
{
    Circle c;
    Rectangle r;

    render(c);
    render(r);

    return 0;
}