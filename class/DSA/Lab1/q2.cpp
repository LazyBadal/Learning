#include <iostream>
#include <cstring>
using namespace std;

void reverseWord(char word[]) {
    int len = strlen(word);
    for (int i=0;i<len/2;i++) {
        char temp = word[i];
        word[i] = word[len-i-1];
        word[len-i-1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    char words[50][50];

    cout << "Enter the sentence word by word: ";
    for (int i=0;i<n;i++) {
        cin >> words[i];
    }


    if (n % 2 == 1) { // odd case
        int mid = n/2;
        for (int i=0;i<n;i++){
            if (i != mid){
                reverseWord(words[i]);
            }
        }
    } else { // even casae
        int mid1=n/2-1;
        int mid2=n/2;
        for (int i=0;i<n;i++){
            if (i!=mid1 && i!=mid2){
                reverseWord(words[i]);
            }
        }
    }

    cout << "msg: ";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    return 0;
}