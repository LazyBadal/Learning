#include <iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cout << "Enter 1st frac: ";
    cin >> a >> b;
    cout << "Enter 2nd frac: ";
    cin >> c >> d;
    cout << a << "/" << b << " + " << c << "/" << d << endl;

    int num =(a*d) + (b*c);
    int den =(b*d);

    cout << "Sum: " << num << '/' << den;
    return 0;
}