#include <iostream>
using namespace std;

class publication{
    string title;
    float price;
    public:
    void getdata(){
        cout << "T: "; cin >> title;
        cout << "P: "; cin >> price;
    }
    // void setdata(string s, float f){
    //     title = s;
    //     price = f;
    // }
    void putdata(){
        cout << title << "  " << price;
    }
};

class book: public publication{
    int page;
    public:
    void getdata(){
        publication::getdata();
        cout << "Page: "; cin >> page;
    }
    void putdata(){
        publication::putdata(); cout << "  " << page;
    }
};

class tape: public publication{
    float time;
    public:
    void getdata(){
        publication::getdata();
        cout << "Time: "; cin >> time;
    }
    void putdata(){
        publication::putdata(); cout << "  " << time;
    }
};

int main(){

    book b;
    tape t;

    b.getdata();
    t.getdata();

    b.putdata();
    t.putdata();

}
