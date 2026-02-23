#include <iostream>
using namespace std;

int main() {
    int n;
    int comparisons = 0;
    cout << "Total sheets: "; cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cout << "Roll No: ";cin >> arr[i];
    }

    for(int i = 1; i < n; i++){ // i=1 since assuming index 0 as sorted
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
        }

        if(j >= 0) comparisons++;
        arr[j + 1] = key;
    }

    cout << "\nSorted roll numbers:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\nTotal comparisons: " << comparisons << endl;
}