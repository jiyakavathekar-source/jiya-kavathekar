#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, rem, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
