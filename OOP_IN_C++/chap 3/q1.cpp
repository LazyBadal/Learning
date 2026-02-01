#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int count=0;
    int table; cout << "Table of: "; cin >> table;
    while(count < 200){
        for (int col=0;col<10;col++){
            cout << setw(6) << table * count;
            count++;
        }
        cout << "\n";
    }
}