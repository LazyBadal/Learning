#include <iostream>
using namespace std;

class trafficlight {
public:
    enum Signal { RED, YELLOW, GREEN };

private:
    Signal currentSignal;

public:

    void set(Signal s) {
        currentSignal = s;
    }

    void display() {
        if (currentSignal == RED) {cout << "Current Signal: RED" << endl;}
        else if (currentSignal == YELLOW) {cout << "Current Signal: YELLOW" << endl;}
        else if (currentSignal == GREEN) {cout << "Current Signal: GREEN" << endl;}
    }
};

int main() {
    trafficlight t;
    t.set(trafficlight::RED); t.display();
    t.set(trafficlight::YELLOW); t.display();
    t.set(trafficlight::GREEN); t.display();

}