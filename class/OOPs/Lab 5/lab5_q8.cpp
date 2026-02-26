#include <iostream>
using namespace std;

class Employee{
private:
  int id;
  float salary;
public:
  Employee(int i,float s){
    id=i;
    salary=s;
  }
  void Display(){
    cout<<"The employee id is :"<<id<<endl;
    cout<<"The employee salary is :"<<salary<<endl;

  }
};

int main(){
   Employee emp[3]={Employee(1,25000),Employee(4,15000),Employee(5,10000)};

   for (int i=0;i<3;i++) {
        emp[i].Display();
    }

  return 0;

}