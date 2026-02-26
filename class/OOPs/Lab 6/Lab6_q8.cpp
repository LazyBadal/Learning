#include <iostream>
#include <cmath>
using namespace std;

class Investment {
private:
    float principal; int years; float rate; float returnValue;

public:
    Investment(float p, int y, float r) {
        principal = p; years = y; rate = r;

        returnValue = principal * pow((1 + rate / 100), years);
    }
    
    void display() {
        cout << "Principal: " << principal << endl;
        cout << "Years: " << years << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Return Value (Compound Only): " << returnValue << endl;
    }
};

int main() {
    float p, r;
    int y;

    cout << "Enter principal amount: "; cin >> p;

    cout << "Enter number of years: "; cin >> y;

    cout << "Enter rate of interest: "; cin >> r;

    Investment *inv = new Investment(p, y, r);
    inv->display(); // int -> from  this class acess display

    delete inv;  
}