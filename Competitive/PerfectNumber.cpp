#include <iostream>

using namespace std;

void isPerfectNumber() {

    int num;
    cin >> num;

    int i = 1;
    int sum = 0;

    if (num < 1) {
        cout << "False";
    }
    else {
        while (i < num) {
            if (num % i == 0) {
                sum += i;
            }
            i++;
        }
    }
    if (sum == num) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}