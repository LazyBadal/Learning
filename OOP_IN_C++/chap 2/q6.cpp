#include <iostream>
#include <iomanip>
using namespace std;

#define BP 1.487
#define Ff 0.172
#define Gd 0.584
#define Jy 0.0095

int main(){
    float d; cout << "USD: "; cin >> d;
    cout << setw(8) << "Brit P: " << setw(10) << d*BP << endl;
    cout << setw(8) << "Frac F: " << setw(10) << d*Ff << endl;
    cout << setw(8) << "Germ D: " << setw(10) << d*Gd << endl;
    cout << setw(8) << "Jap Y: " << setw(10) << d*Jy << endl;

}
