#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    int x;
    int mean;
    float variance=0;

    cout << ":";
    cin >> setw(3) >>x;

    int arr[x];


    for (int i=0;i<x;i++){
        cout <<": ";
        int temp;
        cin >> setw(3) >> temp;
        arr[i] = temp;
    }

    for (int i=0;i<x;i++){
        mean += arr[i];
    }
    mean/=x;
    cout << "\nMean: " << mean;

    for (int i=0;i<x;i++){
        float temp;
        float y = mean;
        temp = arr[i] - y;
        temp*= temp;
        variance += temp;
    }

    variance /= x;
    cout << "\nVariance: " << variance;
    cout << "\nStandard Deviation: " << sqrt(variance);
    return 0;
}