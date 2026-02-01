#include <iostream>
using namespace std;

int fac(int x){
    for (int i=x;i>1;i--){
        x*=i-1;
    }
    cout << x;
    return x;
}

// 6 peeps to 4 chairs

int main(){
    int peeps,chairs,arrang=1;
    cout << "Number of People: ";cin >> peeps;
    cout << "Number of chairs: ";cin >> chairs;
    
    for (int i=peeps;i>(peeps - chairs);i--){
        arrang *= i;
    }
    cout << "\nNumber of Ways: " << arrang;
}