#include <iostream>
using namespace std;

class Person {
protected:
    string name;
};

class Student : public Person {
protected:
    int rollNo;
};

class Result : public Student {
public:
    void setData(string n, int r) {
        name = n;      
        rollNo = r;    
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Result r;

    r.setData("Badal", 1);
    r.display();

    return 0;
}