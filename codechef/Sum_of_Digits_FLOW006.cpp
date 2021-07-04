#include <bits/stdc++.h> 

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases = 0, a = 0, b = 0;
    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        cin >> a;
        while(a != 0) {
            b = b + (a % 10);
            a /= 10;
        }

        cout << b << endl;
        b = 0;
    }

    return 0;
}