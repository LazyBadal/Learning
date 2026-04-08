#include <iostream>
using namespace std;

struct Box{
    int tid;
    Box* next;
};

void S_add(Box*& head, int s_id){
    Box* newbox = new Box();
    newbox->tid = s_id;

    if(head == nullptr){
        head = newbox;
        newbox->next = head;
        return;
    }

    Box* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newbox;
    newbox->next = head;
}

void S_add(Box*& head, int s_id, int after_id){
    Box* newbox = new Box();
    newbox->tid = s_id;

    if(head == nullptr){
        cout << "nolist";
        delete newbox;
        return;
    }

    Box* temp = head;

    do{
        if(temp->tid == after_id){
            newbox->next = temp->next;
            temp->next = newbox;
            return;
        }
        temp = temp->next;
    } while(temp != head);

    cout << "ID NA\n";
    delete newbox;
}

void S_del(Box*& head, int s_id){
    if(head == nullptr){
        return;
    }

    Box* temp = head;
    Box* prev;

    do{
        if(temp->tid == s_id){
            break;
        }
        prev = temp;
        temp = temp->next;
    } while(temp != head);

    if(temp->tid != s_id){
        return;
    }

    if(temp == head && head->next == head){ // head only elemnt
        delete head;
        head = nullptr;
        return;
    }

    if(temp == head){ // if del id is head
        Box* last = head;
        while(last->next != head){
            last = last->next;
        }
        head = head->next;
        last->next = head;
        delete temp;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

void S_Rotate(Box*& head, int s_id){
    Box* temp = head;

    while(temp->tid != s_id){
        temp = temp->next;
    }

    head = temp;
}

void S_Mgame(Box*& head, int M){
    if(head == nullptr){
        return;
    }

    Box* temp = head;
    int c = 1;

    while(head != nullptr && head->next != head){ // last left after this
        if(c == M){
            int x = temp->tid;
            temp = temp->next;
            S_del(head, x);
            c = 1;
        }
        else{
            temp = temp->next;
            c++;
        }
    }

    cout << "Winner: " << head->tid << "\n";
}

void display(const Box* head){
    const Box* temp = head;

    do{
        cout << temp->tid << " ";
        temp = temp->next;
    } while(temp != head);

    cout << "\n";
}

int main(){
    Box* head = nullptr;

    S_add(head,1);
    S_add(head,2);
    S_add(head,3);
    S_add(head,7);
    S_add(head,9);
    display(head);

    S_add(head,4,2);
    S_add(head,6,4);
    S_add(head,10,3);
    display(head);

    S_del(head,4);
    display(head);

    S_Rotate(head,3);
    display(head);

    S_Mgame(head,3);
}