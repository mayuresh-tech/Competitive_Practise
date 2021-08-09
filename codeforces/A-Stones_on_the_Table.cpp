#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int n, ans = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if((i + 1) < n && s[i] == s[i + 1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}