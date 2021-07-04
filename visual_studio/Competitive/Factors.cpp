#include <iostream>

using namespace std;

void printFactors() {

    int num;
    cin >> num;

    int i = 1;

    if (num < 1) {
        cout << "Invalid Value";
    }
    else {
        while (i <= num) {
            if (num % i == 0) {
                cout << i << " ";
            }
            i++;
        }
    }
}