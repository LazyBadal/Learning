#include <iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};

int main(){

    char j1,j2; // junk variables
    date d1;

    cout << "Enter date (dd/mm/yyyy): ";
    cin >> d1.day >> j1 >> d1.month >> j2 >> d1.year;

    cout << "\nDate: " << d1.day << j1 << d1.month << j2 << d1.year;
}