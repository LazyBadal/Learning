# include <iostream>
using namespace std;

class Number{
  
private:
  int value;

public:
  Number(); 
  void show(); 
};

Number::Number(){
  value=50;
}

void Number::show(){
    cout<<"The value is : "<<value<<endl;
}

int main(){
  Number n1;
  n1.show();
}