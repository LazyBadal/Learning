#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    Employee(int i, float s) {
        id = i;
        salary = s;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int id;
    float salary;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter salary: ";
    cin >> salary;

    Employee *emp = new Employee(id, salary);

    emp->display();

    delete emp;
}