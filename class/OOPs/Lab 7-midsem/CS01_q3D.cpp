#include <iostream>
using namespace std;

class Employee{
    int eid;
    string name;
    float sal;

    public:
        Employee(int i,string n,float s){
            eid = i;
            name = n;
            sal = s;
            cout << "\n -- Normal constructor used";
        }
        Employee(const Employee& x){
            eid = x.eid;
            name = x.name;
            sal = x.sal;
            cout << "\n -- copy constructor used";
        }

        void nchange(string n){
            name = n;
        }

        void display(){
            cout << "\n" << eid << ". " << name << " - " << sal; 
        }
};

int main(){

    Employee e1(5,"Bob",43.2);
    e1.display();

    Employee e2(e1);
    e2.display();

    e2.nchange("Hank");

    cout << "\n ------------Final";
    e1.display();
    e2.display();
    
}