#include <iostream>
using namespace std;

void func(int a ,int &b){
    a++;
    b++;
}

int main(){
    int const x=1;
    int y=1;
    cout << x << "   " << y;
    func(x,y);
    cout << "\n" << x << "   " << y;
    // even after calling functino the const x has the same value
}
