# include <iostream>
using namespace std;

class Student{
  
private:
  int marks;

public:
  void setMarks(int m){
    marks=m;
  }
  void showMarks(){
    cout<<"The marks are :"<<marks<<endl;
  }
};

int main(){
  Student s1;
  Student *ptr=&s1;

  s1.setMarks(17);
  ptr->setMarks(19); 

  s1.showMarks();
  ptr->showMarks();



}