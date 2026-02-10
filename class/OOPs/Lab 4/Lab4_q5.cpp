#include <iostream>
#include <iomanip>
using namespace std;

class Employee{
    
    int empid;
    float salary;

    public:
        void setdata(int id,float sal){
           empid = id;
           salary = sal;
        }
        void showdata(){
            cout << "\nID: " << empid << setw(15) << "Salary: " << salary;
        }
};

int main(){

    Employee emp[3];
    int eid;
    float esal;

    for (int i=0;i<3;i++){
        cout << "E ID: "; cin >> eid;
        cout << "E Salary: "; cin >> esal;
        emp[i].setdata(eid,esal);
    }

    for (int i=0;i<3;i++){
        emp[i].showdata();
    }


}