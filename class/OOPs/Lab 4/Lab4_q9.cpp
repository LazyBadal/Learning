#include <iostream>
using namespace std;

class Sample {
public:
    int num;

    void modifyByAddress(Sample* ptr) {
        ptr->num += 1; 
    }
};

int main() {
    Sample obj2;
    obj2.num = 10;

    cout << "object: " << obj2.num << endl;

    obj2.modifyByAddress(&obj2);

    cout << "modification: " << obj2.num << endl;

    Sample* p = &obj2;
    cout << "pointer: " << p->num << endl;

    return 0;
}
