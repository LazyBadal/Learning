#include <iostream>
using namespace std;

class TrafficSignal{
public:
   enum Signal {RED,YELLOW,GREEN};

private:
    Signal currentSignal;

public:
    void setSignal(Signal s){
      currentSignal = s;
    }

   
    void displaySignal(){
      if (currentSignal == RED)
         cout << "The signal is : RED" << endl;

      else if (currentSignal == YELLOW)
         cout << "The signal is : YELLOW" << endl;

      else if (currentSignal == GREEN)
        cout << "The signal is : GREEN" << endl;
    }
};

int main() {
    TrafficSignal t1;
    t1.setSignal(TrafficSignal::GREEN);
    t1.displaySignal();

    return 0;
}