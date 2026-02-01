#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    char op;
    char x;

    do{
    cout << "Enter Num 1 , operater , Num 2: "; cin >> n1 >> op >> n2;
    switch (op){
        case '+':
            cout << n1 + n2;break;
        case '-':
            cout << n1 - n2;break;
        case '*':
            cout << n1 * n2;break;
        case '/':
            cout << n1 / n2;break;
        default:
            cout << "Error";
    }
    cout << "\nAgain (y/n): "; cin >> x;
} while(x != 'n');
}