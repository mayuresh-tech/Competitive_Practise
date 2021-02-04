#include <iostream>

using namespace std;

void sumFirstAndLastDigit() {

    int num;
    cin >> num;

    if (num >= -1) {
        int lastDigit = num % 10;

        int firstDigit = num;
        while (firstDigit >= 10) {
            firstDigit /= 10;
        }
        cout << "Sum: " << firstDigit + lastDigit;
    }
}