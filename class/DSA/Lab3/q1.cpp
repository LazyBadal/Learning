#include <iostream>
#include <string.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

char formula[100];    
char oper[100];       
char postfix[100];   

int top = -1;         
int len = 0;           
int x = true;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}


void push(char c) {
    if (top == 99) {
        cout << "Overflow";
        return;
    }
    oper[++top] = c;
}

char pop() {
    if (top == -1) {
        cout << "Underflow";
        return '\0';
    }
    return oper[top--];
}



void in_to_po() {
    int k = 0;

    for (int i=0 ; i<len ;i++) {
        char ch = formula[i];

        if (isalnum(ch)) {postfix[k++] = ch;}

        else if (ch == '(') {push(ch);}

        else if (ch == ')') {
            while (top != -1) {
                postfix[k++] = pop();
            }
            pop();
        }

        else {
            while (top != -1) {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }


    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';

    cout << "\nPostfix Expression: " << postfix;
}

int main() {
    cout << "Enter Infix Expression: ";

    while(x){
        char ch = getch();
        if (ch == '\r' || ch == '\n') {
            x = false;
        } else {
            formula[len++] = ch;
        }
    }
    formula[len] = '\0';
    in_to_po();
    return 0;
}