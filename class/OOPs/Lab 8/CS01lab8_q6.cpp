#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    void setName(string n) {name = n;}
    string getName() {return name; }
};
class Student : public Person {
protected:
    int rollNo;
};
class Result : public Student {
public:
    void setData(string n, int r) {
        setName(n);   
        rollNo = r;  
    }
    void display() {
        // cout << name; this won't work
        cout << "Name: " << getName() << endl;  
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Result r;

    r.setData("Badal", 1);
    r.display();

    cout << "Access from main: " << r.getName() << endl;

    return 0;
}