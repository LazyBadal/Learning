#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(Complex c1, Complex c2); // add is fireind here
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex c3 = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    c3.display();
    
}