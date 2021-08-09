#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;

        cout << ((g1 + s1 + b1) > (g2 + s2 + b2) ? 1 : 2) << endl;
    }

    return 0;
}