#include <iostream>
using namespace std;
class User {
private:
    string password;
protected:
    string email;
public:
    void setData(string p, string e) {
        password = p;  email = e;
    }
    string getPassword() {
        return password;
    }
};
class Customer : public User {
public:
    void accessInCustomer() {
        cout << "Customer Email: " << email << endl;                     
        cout << "Customer Password: " << getPassword() << endl;
    }
};
class PremiumCustomer : public Customer {
public:
    void accessInPremium() {
        cout << "Premium Email: " << email << endl;
        cout << "Premium Password: " << getPassword() << endl;
    }
};
int main() {
    PremiumCustomer p;
    p.setData("abc123", "user@mail.com");
    p.accessInCustomer();
    p.accessInPremium();
    // cout << p.password; wrong since private
    // cout << p.email; wrong since protected
    cout << "Main Password: " << p.getPassword() << endl;
    return 0;
}