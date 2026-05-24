#include <iostream>
using namespace std;

class sales;

class publication{
    string title;
    float price;
    public:
    void getdata(){
        cout << "T: "; cin >> title;
        cout << "P: "; cin >> price;
    }

    void putdata(){
        cout << "Title: "<<title << endl << "Price: " << price<< endl;
    }
};

class sales{
    float arr[3];
    int m1,m2,m3;
    public:
        void getdata(){
            cout << "1st 2nd 3rd month sales: "; cin >> m1 >> m2 >> m3;
            arr[0] = m1; arr[1] = m2; arr[2] = m3;
        }
        void putdata(){
            for (int i=0;i<3;i++){
                int j=i;
                cout <<"Month "<< j+1 << " sales : "<< arr[i] << " " << endl;
            }
        }

};

class book: public publication, public sales{
    int page;
    public:
    void getdata(){
        publication::getdata();
        cout << "Page: "; cin >> page;
        sales::getdata();
    }
    void putdata(){
        publication::putdata(); cout << "Pages: " << page << endl; sales::putdata();
    }
};

class tape: public publication, public sales{
    float time;
    public:
    void getdata(){
        publication::getdata();
        cout << "Time: "; cin >> time;
        sales::getdata();
    }
    void putdata(){
        publication::putdata(); cout << "Time: " << time << endl; sales::putdata();
    }
};



int main(){
    book b;

    b.getdata();

    b.putdata();


}
