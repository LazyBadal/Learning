#include <iostream>
using namespace std;

void process(int x){cout << "process(int)\n";}

void process(double x){cout << "process(double)\n";}

void process(int x, double y){cout << "process(int, double)\n";}

int main(){
    process(10);
    process(10.5);
    process(10, 10); // the 2nd int converts to a double
    process(10, 10.5);
}
