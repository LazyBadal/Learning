#include <iostream>
using namespace std;

class Box{
    int length;
    int breath; 
    int hight;
    public:
        void setdata(int a,int b,int c){
            length = a;
            breath = b;
            hight = c;
        }

        friend void boxvol(Box a, Box b);
};

void boxvol(Box b1,Box b2){
    cout << "Volume: " << (b1.length*b1.breath*b1.hight) * (b2.length*b2.breath*b2.hight);
}

int main(){
    Box a,b;
    a.setdata(2,2,2);
    b.setdata(3,3,3);

    boxvol(a,b);
}