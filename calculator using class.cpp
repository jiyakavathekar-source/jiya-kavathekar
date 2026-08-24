#include <iostream>
using namespace std;

class Calculator
{
    float a, b;

public:
    void accept()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    void calculate()
    {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible" << endl;
    }
};

int main()
{
    Calculator c;

    c.accept();
    c.calculate();

    return 0;
}
