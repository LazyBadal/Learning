#include <iostream>
using namespace std;

int main(){

    int x;
    cout << ":"; cin >> x;
    float sum=0;

    for(int i=1;i<=x;i++){
        float temp = i*i;
        sum += 1/temp;
        cout << "\nI: " <<i;
    }
    
    cout << "\nSum: " << sum;

    return 0;
}