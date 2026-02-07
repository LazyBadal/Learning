#include <iostream>
using namespace std;

int vol(int,int,int = 10);
// above the fixed peramter is last bcuz all perameters after it will have to be assigned.

int main(){
    int w,l;
    cout << ": ";
    cin >> w >> l;
    cout << "Volume of Cube with Width: " << w << " & length: " <<  l << " is :"<< vol(w,l);
}

int vol(int w,int l, int h){
    // since h defined in prototype no need to retype it here
    return w*l*h;
}