#include <iostream>
using namespace std;

class Distance{
private:
    int meters; int centimeters;
public:
    Distance(int m, int cm){
        meters = m;
        centimeters = cm;
    }
    void display(){
        cout << "meters: " << meters << ", centimeters: " << centimeters << endl;
    }
    friend void pvalue(Distance d);
    friend void pref(Distance &d);
};

void pvalue(Distance d){
    d.meters += 1;
    d.centimeters += 15;
    cout << "value(): ";
    d.display();
}

void pref(Distance &d){
    d.meters += 1; d.centimeters += 10;
    cout << "refrence(): ";
    d.display();
}

int main() {
    Distance d1(5, 50);
    cout << "default: "; d1.display();
    pvalue(d1); cout << "Pass by val: "; d1.display();
    pref(d1); cout << "Pass by ref: ";  d1.display();
    
}