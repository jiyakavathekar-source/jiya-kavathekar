#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void calculateArea()
    {
        float area = length * breadth;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main()
{
    Rectangle r1;          // Default constructor
    Rectangle r2(10, 5);   // Parameterized constructor
    Rectangle r3(r2);      // Copy constructor

    cout << "Default Constructor:" << endl;
    r1.calculateArea();

    cout << "\nParameterized Constructor:" << endl;
    r2.calculateArea();

    cout << "\nCopy Constructor:" << endl;
    r3.calculateArea();

    return 0;
}
