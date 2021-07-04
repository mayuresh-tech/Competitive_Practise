#include <iostream>

using namespace std;

void palindrome() {

    int num;
    cin >> num;

    int onum = num;
    int rev = 0;

    while (num != 0) {
        int digit = num % 10;

        rev = rev * 10 + digit;

        num /= 10;
    }

    if (onum == rev) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }
}