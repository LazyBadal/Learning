#include <iostream> 
using namespace std; 

void x(int &a,int &b){ a=10; b=15; } 

int main(){

    int a=5,b=12; 
    x(a,b); 
    cout<<a<<' '<<b<<'\n';

    a=1; b=1;
    x(a,a);
    cout<<a<<' '<<b; // a gets b value wehn it goes to 2nd a in (a,a)
} 