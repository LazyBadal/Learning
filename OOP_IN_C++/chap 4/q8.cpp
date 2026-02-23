#include <iostream>
using namespace std;

struct frac{
    int nume;
    int denom;
};

void setfrac(frac& x){
    cout << "Enter Numerator: "; cin>> x.nume;
    cout << "Enter Denomenator: "; cin>> x.denom;
}

void display(frac x,frac y){
    cout << x.nume << "/" << x.denom << " + " << y.nume << "/" << y.denom << endl;
}

void frac_sum(frac& x,frac y){
    x.nume =(x.nume*y.denom) + (x.denom*y.nume);
    x.denom =(x.denom*y.denom);
}

int main(){

    frac f1,f2;
    int a,b,c,d;

    cout << "Enter 1st frac: "; setfrac(f1);
    cout << "Enter 2nd frac: "; setfrac(f2);

    display(f1,f2);

    frac_sum(f1,f2);

    cout << f1.nume << '/' << f1.denom;
    return 0;
}