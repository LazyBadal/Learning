#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Box count: ";cin >> n;

    int boxes[n];
    cout << "box no's: ";
    for (int i=0; i<n;i++){
        cin >> boxes[i];
    }

    int find;
    cout << "box search: ";cin >> find;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (boxes[i] == find) {
            cout << "Treasure box found at position: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Treasure box not found.\n";
    }

    int minBox = boxes[0];
    int maxBox = boxes[0];

    for (int i = 1; i < n; i++) {
        if (boxes[i] < minBox)
            minBox = boxes[i];
        if (boxes[i] > maxBox)
            maxBox = boxes[i];
    }

    cout << "\nmin box: " << minBox;
    cout << "\nmax box: " << maxBox;

    return 0;
}