#include <iostream>
using namespace std;

class Library
{
protected:
    string library_name;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> library_name;
    }
};

class Book : public Library
{
private:
    string book_name;

public:
    void getBook()
    {
        cout << "Enter Book Name: ";
        cin >> book_name;
    }

    void displayBook()
    {
        cout << "\n--- Book Information ---\n";
        cout << "Library: " << library_name << endl;
        cout << "Book: " << book_name << endl;
    }
};

class Magazine : public Library
{
private:
    string magazine_name;

public:
    void getMagazine()
    {
        cout << "Enter Magazine Name: ";
        cin >> magazine_name;
    }

    void displayMagazine()
    {
        cout << "\n--- Magazine Information ---\n";
        cout << "Library: " << library_name << endl;
        cout << "Magazine: " << magazine_name << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Enter Book Details\n";
    b.getLibrary();
    b.getBook();

    cout << "\nEnter Magazine Details\n";
    m.getLibrary();
    m.getMagazine();

    b.displayBook();
    m.displayMagazine();

    return 0;
}
