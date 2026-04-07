#include <iostream>
#include <iomanip>
using namespace std;

class MyMatrix{
    int a00,a01,a10,a11;
    public:
        MyMatrix(){}
        MyMatrix(int a, int b, int c, int d){
            a00 = a;
            a01 = b;
            a10 = c;
            a11 = d;
        }

        MyMatrix add(MyMatrix x){
            x.a00 += a00;
            x.a01 += a01;
            x.a10 += a10;
            x.a11 += a11;
            return x;
        }

        void display(){
            cout << setw(2) << a00 << "    " << setw(2) << a01 << "\n" << setw(2) << a10 << "    " << setw(2) << a11;
        }

};

int main(){

    MyMatrix m1(1,2,3,4);
    MyMatrix m2(5,6,7,8);
    MyMatrix a;

    a = m1.add(m2);

    a.display();
}