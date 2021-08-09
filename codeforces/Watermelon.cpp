#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int w;
    cin >> w;

    if(w % 2 == 0 && w > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}