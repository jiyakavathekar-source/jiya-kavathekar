#include <iostream>
using namespace std;

class Employee
{
    int emp_id;
    string name;
    float salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;

    
}
