#include <iostream>
using namespace std;
#include <process.h>
const int LIM = 10;

class safeary{
    private:
        int arr[LIM];
    public:
        int& operator [](int n){
            if (n<0 || n>=LIM){cout << "index out of bonds";}
            return arr[n];
        }
};

class safehilo: public safeary{
    public:
        safehilo(int x){
            int arr[x];
        }
};

int main(){
    safehilo s(113);
    for (int j=0;j<LIM;j++){
        s[j] = j*10;
    }

    for (int j=0;j<LIM;j++){
        int temp = s[j];
        cout << temp << endl;
    }
}

