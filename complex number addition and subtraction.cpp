#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator overloading for +
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Operator overloading for -
    Complex operator -(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Display function
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(3, 5);

    Complex c3, c4;

    // Addition
    c3 = c1 + c2;

    // Subtraction
    c4 = c1 - c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    return 0;



    
}
