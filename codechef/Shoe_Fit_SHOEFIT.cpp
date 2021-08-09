#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1 && b == 0 || b == 1 && a == 0 || a == 1 && c == 0 || c == 1 && a == 0 || b == 1 && c == 0 || b == 0 && c == 1) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }

    return 0;
}