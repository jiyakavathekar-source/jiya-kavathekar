#include <iostream>
using namespace std;

class Employee
{
    int employeeID;
    string name;
    float salary;

public:
    // Default constructor
    Employee()
    {
        employeeID = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s)
    {
        employeeID = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(Employee &e)
    {
        employeeID = e.employeeID;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;                       // Default constructor
    Employee e2(101, "Jiya", 25000);    // Parameterized constructor
    Employee e3(e2);                    // Copy constructor

    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    cout << "\nCopy Constructor:" << endl;
    e3.display();

    return 0;
}
