#include <iostream>
using namespace std;
int pos;

void create_arr(int x){
    int* arr = new int[x];
    arr[0] = x;
}

int main(){

    int p_code_l,p_codes,Total;
    cout << "Total cards: "; cin >> Total;
    int arr[Total];

    for (int i=0;i<Total;i++){
        int temp;
        cout << "Post Card Code: "; cin >> temp;
        arr[i] = temp;}

    cout << "Postal Code Length: "; cin >> p_code_l;

    while (p_code_l != 0){
        for (int i=0;i<Total;i++){
            string s = to_string(arr[i]);
            int last = s.back() - '0';
            
    }
    

    }

    }
    



}