#include <iostream>
using namespace std;

struct Time{
    int sec;
    int min;
    int hour;
    char j1,j2;
};

void settime(Time& x){
    cout << "\nEnter Time (hh:mm:ss): "; cin >>x.hour >> x.j1 >> x.min >> x.j2 >> x.sec;
}

void display(const Time x){
    cout << "\nTime: " <<x.hour << x.j1 << x.min << x.j2 << x.sec;
}

long long int hr_sec(const Time x){
    return x.hour * 3600 + x.min * 60 + x.sec;
}

Time sec_hr(long long int x){
    Time t;
    t.j1 = ':';
    t.j2 = ':';
    t.hour = x/3600;
    x %= 3600;
    t.min = x/60;
    x %= 60;
    t.sec = x;
    return t;
}

int main(){

    long long int sec;
    Time t1,t2,t3;

    settime(t1);
    settime(t2);

    display(t1);
    display(t2);

    sec = hr_sec(t1) + hr_sec(t2);

    t3 = sec_hr(sec);

    display(t3);
}