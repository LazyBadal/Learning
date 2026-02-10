#include <iostream>
#include <string>
using namespace std;

class Author{
    string name;
    public:
        void setname(){
            cout << "Author Name: "; getline(cin,name);
        }
        void display(){
            cout << "Author: " << name;
        }
};

class Book{
    string title;

    public:
        void settitle(){
            cout << "Title: "; getline(cin,title);
        }
        void display(Author a){
            cout << "\n-------------------------------------\n";
            cout << "Title: " << title << endl;
            a.display();
            cout << "\n-------------------------------------\n";
        }
};

int main(){
    Author a1;
    Book b1;
    a1.setname();
    b1.settitle();
    b1.display(a1);
}