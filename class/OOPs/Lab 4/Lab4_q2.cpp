#include <iostream>
using namespace std;

class Number{
    int value;

    public: 
    void display(){
        cout << value;
    }
    
    Number(){
        value = 15;
    }
};

int main(){

    Number n1;
    n1.display();




    
}