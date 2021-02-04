#include <iostream>

using namespace std;


void getDigitCount() {

    int num;
    cin >> num;

    int sum = 0;

    while (num != 0) {
        sum += 1;

        num /= 10;
    }
    cout << sum << " digit(s)";
}