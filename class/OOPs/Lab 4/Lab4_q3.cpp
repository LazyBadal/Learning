#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breath;
    int area;

    public:
        void setdimensions(int l, int b){
            length = l;
            breath = b;
        }
        void CalculateArea(){
            area = length*breath;
        }
        void display(){
            cout << "\nArea of L:" << length << " B:" << breath << " is:" << area;
        }
};

int main(){
    Rectangle r1;
    r1.setdimensions(5,10);
    r1.CalculateArea();
    r1.display();
}