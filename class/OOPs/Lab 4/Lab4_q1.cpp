#include <iostream>
#include <iomanip>
using namespace std;

class Student{
    int roll_no;
    int marks;
    public:
        void setdata(){
            cout << "Enter Roll No: "; cin >> roll_no;
            cout << "Enter Marks: "; cin >> marks;
        }
        void display(){
            cout << setw(5) << roll_no << setw(10) << marks;
        }
};

int main(){

    Student s1;
    s1.setdata();
    s1.display();

    return 0;
}