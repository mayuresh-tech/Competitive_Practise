#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        ll n = 0, k = 0, finalSum = 0;
        cin >> n >> k;

        int m = n - 1;
        ll shift = pow(2, m);
        ll temp = pow(2, n) - 1;
        if(k > shift) {
            finalSum = 2 * temp * shift;
        }
        else {
            finalSum = 2 * temp * k;
        }
        cout << finalSum << endl;
    }
    return 0;
}