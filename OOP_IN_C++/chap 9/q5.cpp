#include <iostream>
using namespace std;

enum period{day,week,month};

class employee{
    private:
        string name;
        unsigned long emp_n;

     public:
        void getdata()
        {
        cout << "\nEnter last name: "; cin >> name;
        cout <<  "\nEnter number: "; cin >> emp_n;
        }
        void putdata() const
        {
        cout << "\nName: " << name;
        cout << "\nNumber: " << emp_n;
        };   
};

class emp2: public employee{
    double compensation;
    char x;
    string paystru;
    string enum_ps(char s){
        switch (s){
            case 'd':{
                return static_cast<string>("Daily"); break;
            }
            case 'w':{
                return static_cast<string>("Weekly"); break;
            }
            case 'm':{
                return static_cast<string>("Monthly"); break;
            }
    }
}

    public:
        void getdata(){
            cout << "Compensation: "; cin >> compensation;
            cout << "Pay Daily(d) Week(w) Monthly(m): ";cin >> x;
            paystru = enum_ps(x);
        }
        void putdata(){
            cout << "Compensation: " << compensation << endl;
            cout << "Pay Structure: " << paystru << endl;
        }
};


class student{
    string school;
    string degree;

    public: 
        void getedu(){
            cout << " Enter name of school or university: "; cin >> school;
            cout << " Enter highest degree earned \n";
            cout << "(Highschool, Bachelor's, Master's, PhD): ";cin >> degree;
            }
        void putedu() const{
            cout << "\n School or university: " << school;
            cout << "\n Highest Degree Earned: " << degree;
            }
};

class manager: public emp2{
    private:
        string title;
        float dues;
        emp2 emp;
        student stu;
    public: 
        void getdata(){
            emp.getdata();
            cout << "Title: "; cin >> title;
            cout << "Dues: "; cin >> dues;
           stu.getedu();
        }
        void putdata(){
            emp.putdata();
            cout << title << endl;
            cout << "Dues: " << dues << endl;
           stu.putedu();
        }
};

int main(){
    manager m;
    m.getdata();
    cout << "/-----------------------/";
    m.putdata();
}