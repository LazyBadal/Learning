#include <iostream>
using namespace std;

void fun(int &x){ cout << "non-const int&\n";}

void fun(const int &x){ cout << "const int&\n";}

int main(){
    int a = 10;
    const int b = 20;
    fun(a);   
    fun(b);   
    fun(5); 

    return 0;
}
