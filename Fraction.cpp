#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void getData()
    {
        cout << "Enter numerator and denominator: ";
        cin >> numerator >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        numerator = (f1.numerator * f2.denominator) +
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void subtract(Fraction f1, Fraction f2)
    {
        numerator = (f1.numerator * f2.denominator) -
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, f3, f4;

    cout << "Enter first fraction:\n";
    f1.getData();

    cout << "Enter second fraction:\n";
    f2.getData();

    f3.add(f1, f2);
    cout << "\nAddition = ";
    f3.display();

    f4.subtract(f1, f2);
    cout << "Subtraction = ";
    f4.display();

    return 0;
}
