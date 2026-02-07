#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return (a>b)?a:b;
    return gcd(b,a%b);
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int result = gcd(x, y);
    if(result != -1)
        cout << "GCD = " << result;
    return 0;
}
