#include <iostream>
using namespace std;

struct Box{
    int coach_n;
    Box *next = nullptr;
};

void insert(Box*& head,int val){
    Box* newbox = new Box();
    newbox->coach_n = val;
    newbox->next = nullptr; // not required since already set in struct

    if (head == nullptr){
        head = newbox;
        return; 
    }

    Box* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newbox;
}

void insert_begin(Box*& head, int val){
    Box* newbox = new Box();

    newbox->coach_n = val;
    newbox->next = head;  
    
    head = newbox;        
}

void insert_after(Box* head, int after_val, int new_val){
    Box* temp = head;

    while(temp != nullptr && temp->coach_n != after_val){
        temp = temp->next;
    }

    if(temp == nullptr){
        cout << "Coach not found\n";
        return;
    }

    Box* newbox = new Box();
    newbox->coach_n = new_val;

    newbox->next = temp->next;
    temp->next = newbox;

}

void display(const Box* head){
    const Box* temp = head;

    while(temp != nullptr){
        cout << temp->coach_n << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main(){
    Box*  head = nullptr; // the entry point

    insert(head,101); 
    insert(head,102); // goes thru entry point then comes here
    insert(head,103);
    insert_begin(head,100);
    insert(head,104);
    insert_after(head,102,105);

    display(head);
}
