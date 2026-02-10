#include <iostream>
using namespace std;

class Demo{
    int num;
    public:
        void set(int num){
            this->num = num; // this num is class num & right num is function peramter
        }
        void show(){
            cout << "Num = " << num;
        }
};

int main(){
    Demo d1;
    int x;
    cout << ": "; cin >> x;
    d1.set(x);
    d1.show();
}