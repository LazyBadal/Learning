#include <iostream>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stackArr[++top] = value;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return stackArr[top--];
}

int main() {
    int n;
    cout << "Enter number of months: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n >= 1)
        push(a);   // Month 1
    if (n >= 2)
        push(b);   // Month 2

    for (int i = 3; i <= n; i++) {
        c = a + b;
        push(c);
        a = b;
        b = c;
    }

    cout << "\nRabbit population:\n";
    while (top != -1) {
        cout << pop() << " ";
    }

    return 0;
}