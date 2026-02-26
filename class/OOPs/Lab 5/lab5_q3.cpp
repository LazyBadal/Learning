#include  <iostream>
using namespace std;

class Test{
private:
  int marks[5];

public:
  void setMarks(){
    for(int i=0;i<5;i++){
      cout<<"Enter the marks in subject "<<i+1<<":";
      cin>>marks[i];
    }
  }

  void displayMarks(){
    for(int i=0;i<5;i++){
      cout<<"The marks in subject  "<<i+1<<"are:"<<marks[i]<<endl;
     }  
  }

  void calculateAverage(){
    int sum=0;
    for(int i=0;i<5;i++){
      sum+=marks[i];

    }
    cout<<"The average marks is :"<<sum/5<<endl;
    }

};

int main(){
  Test t1;
  t1.setMarks();
  t1.displayMarks();
  t1.calculateAverage();
}