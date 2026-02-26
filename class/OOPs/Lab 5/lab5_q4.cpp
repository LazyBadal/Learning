#include <iostream>
using namespace std;

class Calculator{
private:
  int num1;
  int num2;
  int result;

  void add(){
    result=num1+num2;
  }
public:
  void setData(int a,int b){
    num1=a;
    num2=b;
    add();
  }
  void showResult(){
    cout<<"The addition is :"<<result<<endl;
  }

};

int main(){
  Calculator c1;
  c1.setData(15,40);
  c1.showResult();
}