#include <iostream>

using namespace std;

void reverse() {
    int n, reverse = 0, rem;
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
    return 0;
}