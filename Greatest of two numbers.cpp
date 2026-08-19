#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void display()
    {
        if (a > b)
            cout << "Greatest number = " << a;
        else
            cout << "Greatest number = " << b;
    }
};

int main()
{
    Greatest g;

    g.accept();
    g.display();

    return 0;
}
