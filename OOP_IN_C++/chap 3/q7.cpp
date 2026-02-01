#include <iostream>
using namespace std;

int main(){
    int years;
    float interest,inital;

    cout << "Enter Inital Amount: "; cin >> inital ;
    cout << "Enter years: "; cin >> years;
    cout << "Enter yearly interest: "; cin >>interest ;

    for (int i=1;i<=years;i++){
        inital = inital + (inital * (interest/100));
    }

    cout << "\nIn " << years << " years you will have " << inital;
}