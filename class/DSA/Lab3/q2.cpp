#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    // insert
    void enqueue(int ticket) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow! No more passengers allowed.\n";
            return;
        }
        rear++;
        arr[rear] = ticket;
        cout << "Passenger with ticket " << ticket << " added to queue.\n";
    }

    // delete
    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow! No passengers in queue.\n";
            return;
        }
        cout << "Passenger with ticket " << arr[front] << " got ticket and left queue.\n";
        front++;
    }

    // display
    void display() {
        if (front > rear) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Passengers in queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, ticket;

    while (true) {
        cout << "1. Enqueue (New Passenger)\n";
        cout << "2. Dequeue (Give Ticket)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ticket number: ";
                cin >> ticket;
                q.enqueue(ticket);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}
