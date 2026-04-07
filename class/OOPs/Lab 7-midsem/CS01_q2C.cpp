#include <iostream>
using namespace std;

class Printer{
    public:
        void printing(int x){cout << "\n1";}
        void printing(double x){cout << "\n2";}
        void printing(const char* str){cout << "\n3";}
        void printing(int x, int y){cout << "\n4";}
};

int main(){
    Printer p;

    p.printing(5);
    p.printing(5,6);
    p.printing('a');
    p.printing("Hello");
    p.printing(10.6);
}