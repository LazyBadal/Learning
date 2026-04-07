#include <iostream>
using namespace std;

class Mytime{
    int sec,min,hour;
    public:
        Mytime(){
            sec = 50;
            min = 45;
            hour = 2;
        }
        Mytime(int x){
            sec = 30;
            min = 20;
            hour = 1;
        }

        Mytime operator+(Mytime t){
            Mytime t0;
            t0.sec = 0; t0.min = 0;t0.hour = 0;
            t0.sec = this->sec + t.sec;
            t0.min = this->min + t.min;
            t0.hour = this->hour + t.hour;

            while (t0.sec >= 60){
                t0.sec -= 60;
                t0.min += 1;
            }

            while (t0.min >= 60) {
                t0.min -= 60;
                t0.hour += 1;
            }

            return t0;
        }

        void display(){
            cout << "\n" <<hour << ":" << min << ":" << sec;
        }
};

int main(){
    Mytime t1;
    Mytime t2(2);

    t1.display();
    t2.display();

    t1 = t1 + t2;
    t1.display();
}