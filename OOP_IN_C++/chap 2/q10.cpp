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

    int pound,shillings,pence;
    cout << "Enter Pound: "; cin >> pound;
    cout << "Enter Shillings: "; cin >> shillings;
    cout << "Enter pence: "; cin >> pence;

    cout << "\x9c" << pound << '.' << shillings << '.'<<pence <<endl;

    cout << "New System: " << "\x9c" << pound << '.' << 100*(shillings*12+pence)/240;

    return 0;
}