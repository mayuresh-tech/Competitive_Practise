#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        ll e = 0, k = 0;
        cin >> e >> k;

        int len = 0;
        while(e) {
            e = floor(e / k);
            len++;
        }
        cout << len << endl;
    }
    return 0;
}