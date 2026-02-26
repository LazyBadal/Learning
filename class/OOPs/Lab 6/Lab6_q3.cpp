#include <iostream>
using namespace std;

class Item{
    int price;
    int pages;
    
    public:
        Item(int pi,int pa){
            price = pi;
            pages = pa;
        }

        Item(Item &obj){
            price = obj.price;
            pages = obj.pages;
            cout << "\nCopy Construct Used";
        }

        void display(){
            cout << "\nPrice: " << price << "  " << "Pages: " << pages;
        }
};

int main(){
    Item i1(10,1);
    i1.display();

    Item i2(i1);
    i2.display();
}