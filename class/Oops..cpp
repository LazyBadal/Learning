#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Overload + operator
    Point operator+(Point other) {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;  // calls overloaded operator

    cout << p3.x << " " << p3.y << endl;  // 6 8
}