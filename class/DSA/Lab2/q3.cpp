#include <iostream>
#include <cstring>
using namespace std;

//Global
char stackArr[100];
int top = -1;
int Stksize;


void push(char ch){
    if(top == Stksize - 1){
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    stackArr[top] = ch;
}


char pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return '\0';
    }
    char ch = stackArr[top];
    top--;
    return ch;
}


char peek(){
    if(top == -1)
        return '\0';
    return stackArr[top];
}

int main(){
    char str[100];
    cout << "Enter string: ";
    cin >> str;

    Stksize = strlen(str);

    for(int i=0 ; i<Stksize ;i++){
        push(str[i]);
    }

    bool palindrome = true;
    for(int i=0 ;i<Stksize ;i++){
        if(str[i] != pop()){
            palindrome = false;
            break;
        }
    }

    if(palindrome) cout << "Palindrome";
    else    cout << "Not Palindrome";

    return 0;
}
