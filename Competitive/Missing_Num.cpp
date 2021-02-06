#include <iostream>

using namespace std;

void missing() {
    long long int n, s = 0, ele;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> ele;
        s += ele;
    }
    cout << n * (n + 1) / 2 - s;
}