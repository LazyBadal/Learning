#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int size;

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

void push(int value) {
    if (top == size - 1) {
        printf("Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
        return;
    }
    top--;
}


int main() {
    int choice, value;

    printf("Stack size: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));

    if (stack == NULL) {
        return 1;
    }

    do {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf(": ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);
    free(stack);
    return 0;
}
