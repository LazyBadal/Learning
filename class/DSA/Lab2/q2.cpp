#include <iostream>
using namespace std;

int *stackArr;
int top = -1;
int size;

void push(int val){
    if(top == val - 1){
        cout << "Stack Overflow (stack full)\n";
        return;
    }
    top++;
    stackArr[top] = val;
}

int pop(){
    if(top == -1){
        cout << "Stack Underflow (stack empty)\n";
        return -1;
    }
    int v = stackArr[top];
    top--;
    return v;
}

int main(){
    int x; 
    long fact = 1;

    cout << "Enter number: ";
    cin >> x;
                 
    stackArr = new int[x];     

    for(int i=1 ;i<=x ;i++){
        push(i);
    }

    while(top != -1){
        fact = fact * pop();
    }

    cout << "Factorial: " << fact;

    delete[] stackArr;
    return 0;
}
