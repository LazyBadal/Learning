#include <iostream>
using namespace std;

int& maxElement(int (&arr)[5]) {
    int mI = 0;
    for (int i=1;i<5;i++){
        if (arr[i] > arr[mI]){
            mI = i;
        }
    }
    return arr[mI];} // find the largest no. & get it's index

int main() {
    int arr[5] = {3, 7, 2, 9, 5};
    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout <<"\n";
    maxElement(arr) = 100; // replace largest no with 100
    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
