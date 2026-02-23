#include <iostream>
#include <string>
using namespace std;

struct date{
    int day;
    int month;
    int year;
    char j1,j2;
};

enum etype{labour ,secratary ,manager , accountant ,executive , researcher};

struct Employee{
    int ID;
    float Compensation;
    char e_type;
    string etype;
    date d1;
};

void setdata(Employee& x){
    cout << "\nEnter ID: "; cin >> x.ID;
    cout << "Enter Compensatoin: "; cin >> x.Compensation;
    cout << "Enter Employee type: "; cin >> x.e_type;
    cout << "Enterr date: "; cin >> x.d1.day >> x.d1.j1 >> x.d1.month >> x.d1.j2 >> x.d1.year;
}

void display(const Employee x){
    cout <<  "\n----------------------------------------";
    cout << "\nID: " << x.ID;
    cout << "\nCompensatoin: " << x.Compensation;
    cout << '\n' << x.etype;
    cout << "\nEdate: " << x.d1.day << x.d1.j1 << x.d1.month << x.d1.j2 << x.d1.year;
    cout <<  "\n----------------------------------------";
}

int main(){
    Employee e[3];
    int num;

    for (int i=0;i<3;i++){
        setdata(e[i]);
    }

    for (int i=0;i<3;i++){
        switch(e[i].e_type){
        case 'l':
            num = etype(labour) ; break;
        case 's':
            num = etype(secratary); break;
        case 'm':
            num = etype(manager); break;
        case 'a':
            num = etype(accountant); break;
        case 'e':
            num = etype(executive); break;
        case 'r':
            num = etype(researcher); break;
        
        default:
            cout << "Error"; break;
        }
    }

    for (int i=0;i<3;i++){
        switch (num){
        case 1:
           e[i].etype = "Employee Type: Secratary" ; break;
        case 2:
           e[i].etype = "Employee Type: Manager" ; break;
        case 3:
           e[i].etype = "Employee Type: Accountant" ; break;
        case 4:
           e[i].etype = "Employee Type: Executive" ; break;
        case 5:
           e[i].etype = "Employee Type: Researcher" ; break;
        case 0:
           e[i].etype = "Employee Type: Labour" ; break;
    }
    }

    for (int i=0;i<3;i++){
        display(e[i]);
    }


}