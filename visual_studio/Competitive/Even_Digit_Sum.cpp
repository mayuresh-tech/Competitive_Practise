#include <iostream>

using namespace std;

void getEvenDigitSum() {

    int num;
    cin >> num;

    int sum = 0;
    if (num >= -1) {
        while (num != 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                sum += digit;
            }
            num /= 10;
        }
        cout << "Sum: " << sum;
    }
}