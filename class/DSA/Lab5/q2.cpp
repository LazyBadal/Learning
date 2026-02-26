#include <iostream>
#include <string>
using namespace std;

struct Register{
    int Roll_No;
    string Name;
    Register* next = nullptr;
};

void insert(Register*& head,int rn,string na){
    Register* newregis = new Register();
    newregis->Roll_No = rn;
    newregis->Name = na;

    if (head == nullptr){
        head = newregis;
        return;
    }

    Register* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newregis;
}

void insert_begin(Register*& head,int rn, string na){
    Register* newregis = new Register();

    newregis->Roll_No = rn;
    newregis->Name = na;

    newregis->next = head;
    head = newregis;
}

void insert_anywhere(Register*& head,int after_rn,int rn,string na){
    Register* temp = head;

    while (temp != nullptr && temp->Roll_No != after_rn){
        temp = temp->next;
    }
    
    if(temp == nullptr){
        cout << "No Roll number.\n";
        return;
    }
    
    Register* newregis = new Register();

    newregis->Roll_No = rn;
    newregis->Name = na;

    newregis->next = temp->next;
    temp->next = newregis;
}


void display(const Register* head){
    const Register* temp = head;

    while (temp != nullptr){
        cout << temp->Roll_No << "." << temp->Name << " -> "; temp = temp->next;
    }

    cout << " Null\n";
}

int main(){

    Register* head = nullptr;

    insert(head,1,"bob");
    insert(head,2,"pop");
    display(head);
    insert_begin(head,3,"bro");
    display(head);
    insert_anywhere(head,1,4,"jack");
    display(head);
}
