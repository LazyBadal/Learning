#include <iostream>
using namespace std;

struct Time{
    int sec;
    int min;
    int hour;
    char j1,j2;
};

void settime(Time& x){
    cout << "Enter Time (hh:mm:ss): "; cin >>x.hour >> x.j1 >> x.min >> x.j2 >> x.sec;
}

void display(const Time x){
    cout << "\nTime: " <<x.hour << x.j1 << x.min << x.j2 << x.sec;
}

long long int hr_sec(const Time x){
    return x.hour * 3600 + x.min * 60 + x.sec;
}

int main(){

    long long int sec;
    Time t1;

    settime(t1);

    display(t1);

    sec = hr_sec(t1);
    cout << "\nTime in sec: " << sec;
}