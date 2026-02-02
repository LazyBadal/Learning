#include <iostream>
using namespace std;    

// 12 pence to a shell  
// 20 shell to a pound
// 100 pence to new pound 

// 5.2.8 = 5.13

/*
240 pence a pound
so 100 * old pence /240 gives new pound
*/

int  main(){
    
    int pound, shillings, pence,x;
    float m1,m2;

    cout << "Enter Pound: "; cin >> pound;
    cout << "Enter Shillings: "; cin >> shillings;
    cout << "Enter pence: "; cin >> pence;

    int m1_t = pound * 240 + shillings * 12 + pence;
    m1 = m1_t / 240.0;

    cout << "Enter Pound: "; cin >> pound;
    cout << "Enter Shillings: "; cin >> shillings;
    cout << "Enter pence: "; cin >> pence;

    int m2_t = pound * 240 + shillings * 12 + pence;
    m2 = m2_t / 240.0;
    char op;

    cout << "Enter operator: "; cin >> op;
    switch (op){
        case '+':
            cout << m1 + m2;break;
        case '-':
            cout << m1 - m2;break;
        case '*':
            cout << "m1 * x(enter x): ";cin >>x;
            cout << m1 * x;break;
        default:
            cout << "Error";
    }

    return 0;
}