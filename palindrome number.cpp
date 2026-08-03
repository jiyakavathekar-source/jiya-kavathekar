#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}
