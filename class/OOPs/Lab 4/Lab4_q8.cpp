#include <iostream>
using namespace std;

class Sample{
    public:
        int num;
        void modify(Sample &x){
            x.num +=1;
        }
};

int main(){
    Sample s;
    s.num = 10;
    cout << "Num = " << s.num;
    s.modify(s);
    cout << "\nNum = " << s.num;
}