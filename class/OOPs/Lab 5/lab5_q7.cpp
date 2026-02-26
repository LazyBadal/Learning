#include<iostream>
using namespace std;

class Counter{
private:
  static int count;
public:
  Counter(){
    count++;
  }

  static void getCount(){
    cout<<"Total: " << count<<endl;
  }

};

int Counter::count = 0;

int main(){
    Counter c1;
    Counter c2;
    Counter c3;
    Counter::getCount(); 
}