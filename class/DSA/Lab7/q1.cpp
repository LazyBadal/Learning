#include <iostream>
using namespace std;

void display(int arr[],int n){
    for (int i=1;i<=n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarysearch(int arr[],int size, int id){
    
    int low = 0;
    int high = size -1;

    while (low <= high){
        int mid = low + (high-low)/2;

        if (arr[mid] == id){
            return mid;
        }

        if (arr[mid] < id){
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
        return -1;
} 


int main(){
    int bookn , b_id;

    cout << "Book Count: ";
    cin >> bookn;

    int* arr = new int[bookn];

    for (int i = 0; i < bookn; i++){
        cout << "Enter Book ID: ";
        cin >> b_id;
        arr[i] = b_id;
    }

    display(arr, bookn);
    
    for (int d = 0; d < bookn; d++){
        for (int i = 1; i < bookn; i++){
            if (arr[i] < arr[i - 1]){
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }

    int search_id;
    cout << "Search: ";
    cin >> search_id;

    int abc = binarysearch(arr, bookn, search_id);

    if (abc == -1) cout << "NA";
    else cout << "index: " << abc;

    delete[] arr;
    return 0;
}
