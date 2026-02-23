#include <iostream>
using namespace std;

enum etype{labour ,secratary ,manager , accountant ,executive , researcher};

int main(){

    char choice;
    int num=0;
    
    cout << "First letter: "; cin >> choice;
    switch (choice){
    case 'l':
        num = etype(labour) ; break;
    case 's':
        num = etype(secratary); break;
    case 'm':
        num = etype(manager); break;
    case 'a':
        num = etype(accountant); break;
    case 'e':
        num = etype(executive); break;
    case 'r':
        num = etype(researcher); break;
    
    default:
         cout << "Error"; break;
    }

    switch (num){
        case 1:
           cout << "Employee Type: Secratary" ; break;
        case 2:
           cout << "Employee Type: Manager" ; break;
        case 3:
           cout << "Employee Type: Accountant" ; break;
        case 4:
           cout << "Employee Type: Executive" ; break;
        case 5:
           cout << "Employee Type: Researcher" ; break;
        case 0:
           cout << "Employee Type: Labour" ; break;
    }
}