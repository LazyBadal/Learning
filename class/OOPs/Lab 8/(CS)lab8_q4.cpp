#include <iostream>
using namespace std;

class Patient {
private:
    string disease;

public:
    void setDisease(string d) {
        disease = d;
    }

    void showDisease() {
        cout << "Disease: " << disease << endl;
    }
};

class Doctor : public Patient {
public:
    void checkPatient() {
        showDisease();
        cout << "Doctor cannot access disease directly." << endl;
    }
};

int main() {
    Doctor d;

    d.setDisease("Flu");
    d.showDisease();
    d.checkPatient();

    return 0;
}