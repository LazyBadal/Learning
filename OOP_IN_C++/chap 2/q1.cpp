#include <iostream>
#define cubic_f 7.481
using namespace std;

int main(){
    int g;
    cout << "How many gallons: "; cin >> g;
    float g_c = g*cubic_f;
    cout <<"That is: " << g_c << " in cubic feet.";

    return 0;
}

