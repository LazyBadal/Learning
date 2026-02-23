#include <iostream>
using namespace std;

struct point{
    int x;
    int y;

    void display() const {
        cout << "\n(" << x << "," << y << ")\n";
    }

    point add(point a, point b){
        return {a.x + b.x, a.y + b.y};
    }

};

int main(){
    point a = {3,5};
    point b = {4,7};

    point c;
    c = c.add(a,b);
    c.display();
}
