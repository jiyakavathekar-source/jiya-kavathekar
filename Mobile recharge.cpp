#include <iostream>
using namespace std;

class MobileRecharge
{
    string number;
    float amount;

public:
    MobileRecharge(string n, float a)
    {
        number = n;
        amount = a;
    }

    void recharge()
    {
        cout << "Recharge Successful!" << endl;
        cout << "Mobile No: " << number << endl;
        cout << "Amount: Rs." << amount << endl;
    }
};

int main()
{
    string no;
    float amt;

    cout << "Enter Mobile Number: ";
    cin >> no;

    cout << "Enter Recharge Amount: ";
    cin >> amt;

    MobileRecharge r(no, amt);
    r.recharge();

    return 0;
}
