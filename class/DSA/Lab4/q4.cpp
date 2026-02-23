#include <iostream>
using namespace std;

void display(const int* arr,int size){
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int s=5;
    cout << "Num of elements in arr: "; cin >> s;
    
    int arr[s] = {13,11,2,4,1};

    for (int i=0;i<s;i++){
        cout << ": "; cin >> arr[i];
    }

    display(arr,s);

    // swap thing
    int sw=1;
    while(sw != 0){
        sw = 0;
        for (int i=0;i<s-1;i++){
            if (arr[i] > arr[i+1]){ // current > next if yes then switch
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sw=1;               // if swap happens make sure we go through while loop again
            }
        }
    }

    cout << '\n';
    display(arr,s);
}