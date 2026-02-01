#include <iostream>
using namespace std;

int main(){

    int x;
    cout << "Lines: "; cin >> x;

    for (int i=1;i<=x;i++){
        for (int space=x;space > i;space--){cout << " ";}
        for (int j=0;j<(2*i-1);j++){cout <<"*";}
        cout<<"\n";
        if (i >= x){break;}
    }    

}
    