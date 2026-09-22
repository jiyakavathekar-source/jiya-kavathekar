#include <iostream>
using namespace std;

class Library
{
protected:
    string libraryName;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> libraryName;
    }
};

class Book : public Library
{
public:
    void displayBook()
    {
        cout << "\nBook Details" << endl;
        cout << "Library: " << libraryName << endl;
    }
};

class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "\nMagazine Details" << endl;
        cout << "Library: " << libraryName << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    b.getLibrary();
    b.displayBook();

    m.getLibrary();
    m.displayMagazine();

    return 0;
}
