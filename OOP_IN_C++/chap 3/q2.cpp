#include <iostream>
using namespace std;

int main(){

    int inp;

    cout << "1. F to C" << "\n"
    << "2. C to F" << "\n" << ": ";
    cin >> inp;

    float out;
    int temp;

    if (inp == 1){
        cout << "Enter temp in F: "; cin >> temp;
        out = (temp - 32)*(5/9);
        cout << "in C: "<<out;
    }
    else if (inp ==2){
        cout << "Enter temp in C: "; cin >> temp;
        out = (temp * 9/5) + 32;
        cout << "in F: "<<out;
    }
    else {cout << "Error";}
    


}