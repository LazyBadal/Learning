#include <iostream>
using namespace std;

class Students{
    static int count;
    int rn;
    int marks;
    
    public:
        Students(){
            count++;
        }

        static void T_count(){
            cout << "\nTotal Objects: " << count;
        }

        void setdata(int r, int m){
            rn = r;
            marks = m;
        }

        void getdata(){
            cout << "\nRoll NO: " << rn <<
                 '\n' << "Marks: " << marks;
        }
};

int Students::count = 0;

int main(){
    Students s1,s2,s3;

    s1.setdata(1,70);
    s2.setdata(2,90);
    s3.setdata(3,80);

    s1.getdata();
    s2.getdata();
    s3.getdata();
    
    s1.T_count();
}