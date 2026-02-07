#include <iostream>
using namespace std;

int inline cubic(int x){return x*x*x;}
int cube(int x){
    return x*x*x;
}

int main(){
    int i = 4;
    cout << "Cube of: "<< i << " is: "<<cubic(i) // here cubic is replaced with x*x*x
    << "\n"
    << "Cube of: "<< i << " is: "<<cube(i); // here it goes to cube runs and gets result back
}