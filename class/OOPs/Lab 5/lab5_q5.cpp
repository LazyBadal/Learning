#include <iostream>
using namespace std;

class Demo{
private:
  int num;

public:
  void setNum(int num){
    this->num=num;
  }
  void show(){
    cout<<"The number is :"<<num<<endl;

  }
};

int main(){
  Demo d1;
  d1.setNum(100);
  d1.show();

  return 0;
}