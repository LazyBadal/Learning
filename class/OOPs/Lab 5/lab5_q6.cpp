#include <iostream>
using namespace std;

namespace MySpace{
  int cout=4;
  int cin=7;
}

int main(){
  std::cout<<"The output of std::cout is :"<<endl;
  cout<<"The output of MySpace::cout is : "<<MySpace::cout<<endl; 
  cout<<"The output of MySpace::cin is : "<<MySpace::cin<<endl; 
}