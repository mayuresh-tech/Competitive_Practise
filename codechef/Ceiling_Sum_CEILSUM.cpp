#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        ll a = 0, b = 0;
        cin >> a >> b;

        int ans = 0;
        if(a == b) {
            cout << "0" << endl;
            continue;
        }
        else if(a > b) {
            ans = a - 1;
            ans = ceil(floor(b - ans) / 2) + ceil(floor(ans - a) / 2);
        }
        else {
            ans = b - 1;
            ans = ceil(floor(b - ans) / 2) + ceil(floor(ans - a) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}