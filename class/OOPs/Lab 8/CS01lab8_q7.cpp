#include <iostream>
using namespace std;

class Engine {
protected:
    int power;
};
class Battery {
protected:
    int power;
};
class HybridCar : public Engine, public Battery {
public:
    void setPower() {
        // power = 100; ambigious error
        Engine::power = 150;
        Battery::power = 80;
    }

    void display() {
        cout << "Engine Power: " << Engine::power << endl;
        cout << "Battery Power: " << Battery::power << endl;
    }
};

int main() {
    HybridCar h;

    h.setPower();
    h.display();

    return 0;
}