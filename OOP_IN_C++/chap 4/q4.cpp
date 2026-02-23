#include <iostream>
using namespace std;

struct Employee{
    int ID;
    float Compensation;
};

void setdata(Employee& x){
    cout << "\nEnter ID: "; cin >> x.ID;
    cout << "Enter Compensatoin: "; cin >> x.Compensation;
}

void display(Employee x){
    cout << "\n------------------------------------------";
    cout << "ID: " << x.ID;
    cout << "Compensation: " << x.Compensation;
    cout << "\n------------------------------------------";
}

int main(){
    Employee e[3];

    for (int i=0;i<3;i++){
        setdata(e[i]);
    }

    for (int i=0;i<3;i++){
        display(e[i]);
    }
}