#include <iostream>
using namespace std;

class Volume{
    int length;
    int breath;
    int hight;

    public:
        Volume() {
            length = 0;
            breath = 0;
            hight = 0;
        }
        Volume(int l){
            length = l;
            breath = 5;
            hight = 5;
        }
        Volume(int l,int b,int h){
            length = l;
            breath = b;
            hight = h;
        }

        void vol(){
            cout << "\nVolume: " << length * breath * hight;
        }
};

int main(){
    Volume v1;
    Volume v2(5);
    Volume v3(10,10,10);

    v1.vol();
    v2.vol();
    v3.vol();

}