#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) {
        num = n;
    }

    friend int square(Number n);
};


int square(Number n) {
    return n.num * n.num;
}

int main() {
    Number obj(5);

    cout << "Square of the number: " << square(obj) << endl;

}