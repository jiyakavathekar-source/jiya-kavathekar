#include <iostream>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        float totalCost = price * quantity;

        cout << "\nProduct ID: " << productID << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << totalCost << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();

    return 0;
}
