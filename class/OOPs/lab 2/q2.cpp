#include <iostream>
using namespace std;

int main(){

    int num1,num2,operation;
    cout << "Num1 Num2: ";
    cin >> num1 >> num2;
    cout << "Operator: "; cin >> operation;
    
    switch(operation){
        case 1:
            cout << num1 + num2; break;
        case 2:
            cout << num1 - num2; break;
        case 3:
            cout << num1 * num2; break;
        case 4:
            cout << num1 / num2; break;
        default:
            cout << "Invalid";
    }
    return 0;
}