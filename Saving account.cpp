#include <iostream>
using namespace std;

class SavingAccount
{
    string name;
    int accno;
    float balance, rate;

public:
    SavingAccount(string n, int a, float b, float r)
    {
        name=n; accno=a; balance=b; rate=r;
    }

    class Details
    {
    public:
        void show()
        {
            cout << "Saving Account\n";
        }
    };

    void deposit(float x) { balance += x; }
    void withdraw(float x) { balance -= x; }
    void interest() { balance += balance * rate / 100; }

    void display()
    {
        cout << name << " " << accno << " " << balance << endl;
    }
};

int main()
{
    SavingAccount s("Tanuja",101,5000,5);

    SavingAccount::Details d;
    d.show();

    s.deposit(1000);
    s.withdraw(500);
    s.interest();
    s.display();

    return 0;
}
