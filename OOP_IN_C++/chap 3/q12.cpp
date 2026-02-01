#include <iostream>
using namespace std;

int main(){

    float n1,n2,n3,n4;
    char op;
    char x;

    cout << "Enter Num 1/Num 2 operater Num 3/Num 4: "; cin >> n1 >> x >> n2 >> op >> n3 >> x >> n4;
    switch (op){
        case '+':
            cout << (n1*n4 + n2*n3)/(n2*n4);break;
        case '-':
            cout << (n1*n4 - n2*n3)/(n2*n4);break;
        case '*':
            cout << (n1*n3)/(n2*n4);break;
        case '/':
            cout << (n1*n4)/(n2*n3);break;
        default:
            cout << "Error";
    }
}