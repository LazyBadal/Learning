#include <iostream>
using namespace std;

struct phone{
    int area_code;
    int exchange;
    int number;
    
    void display(){
        cout << "\n(" << area_code << ")" << "  " << exchange << "-" << number << "\n";
    }
};

int main(){
    phone p1,p2;
    p1.area_code = 212;
    p1.exchange = 767;
    p1.number = 8900;

    cout << "enter areacode/exchange/number: ";
    cin >> p2.area_code >> p2.exchange >> p2.number;

    p1.display();
    p2.display();
}