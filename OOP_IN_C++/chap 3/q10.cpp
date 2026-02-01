#include <iostream>
using namespace std;

int main(){
    int years=0;
    float interest,inital,final;

    cout << "Enter final Amount: "; cin >> final ;
    cout << "Enter Inital Amount: "; cin >> inital ;
    cout << "Enter yearly interest: "; cin >>interest ;

    while (inital < final){
        inital = inital + (inital * (interest/100));
        years++;
    }

    cout << "\nIn " << years << " years you will have " << final;
}