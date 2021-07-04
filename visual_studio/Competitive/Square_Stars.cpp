#include <iostream>

using namespace std;

void printSquareStar() {

    int number;
    cin >> number;

    if (number < 5) {
        cout << "Invalid Value";
    }
    else {
        for (int i = 0; i < number; i++) {

            // Loop denoting columns
            for (int j = 0; j < number; j++) {
                if (i == 0 || j == 0 || i == j || i == number - 1 || j == number - 1 || i + j == number - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << "";
        }
    }
}