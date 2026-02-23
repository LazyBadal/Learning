#include <iostream> 
using namespace std;

struct Distance{
    float feet;
    float inches;
};

// 1 foot = 12 inches

struct Volume{
    Distance l;
    Distance b;
    Distance h;
};

float convert(const Volume& x){ // function can only modify can't change orignial one now
    
    float temp = x.l.feet + (x.l.inches/12.0);  // .0 just to make sure its float division
    float temp1 = x.b.feet + (x.b.inches/12.0);
    float temp2 = x.h.feet + (x.h.inches/12.0);
    return temp * temp1 * temp2;
}

int main(){
    Volume v1;
    v1  = {{10,5},{20,5},{30,5}};
    float vol = convert(v1);
    cout << "Volume: " << vol;
}