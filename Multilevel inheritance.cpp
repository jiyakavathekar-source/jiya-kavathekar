#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student_Marks : public Student
{
protected:
    int marks[5];

public:
    void getMarks()
    {
        cout << "Enter marks of 5 subjects:\n";
        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Student_Perc : public Student_Marks
{
    float percentage;

public:
    void calculate_perc()
    {
        int total = 0;

        for(int i = 0; i < 5; i++)
            total += marks[i];

        percentage = total / 5.0;
    }

    void display_info()
    {
        cout << "\n--- Student Information ---\n";
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Student_Perc s;

    s.getData();
    s.getMarks();
    s.calculate_perc();
    s.display_info();

    return 0;
}
