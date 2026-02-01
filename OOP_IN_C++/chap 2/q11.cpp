#include <iostream>
using namespace std;
#include <iomanip>  

int main(){
    // setiosflags(ios::left) can be repalced with simple left also
    cout << setiosflags(ios::left) << setw(15) << "Last Name" << setw(15) << "First Name" << setw(15) << "Town" << endl;
    cout << setfill('-') << setw(40) << "";
    return 0;
}