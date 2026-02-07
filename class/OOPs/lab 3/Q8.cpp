#include <iostream>
using namespace std;

void sumOfDigits(int n, int &result) {
    if (n == 0){ return;}
    result += n % 10;
    sumOfDigits(n / 10, result);
}
// returning is not always prefered since it required making a copy reducing efficeny 
int main() {
    int n;
    cout << ": "; cin >> n;
    int result = 0;
    sumOfDigits(n, result);
    cout << "Sum = " << result;
    return 0;
}
