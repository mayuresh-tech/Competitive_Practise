#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases;
    cin >> testCases;

    while(testCases--) {
        ll n;
        cin >> n;
        
        ll a[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll,ll> f;
        for(ll x : a)
        {
            f[x]++;
        }
        ll res = n * (n - 1);
        for (auto y : f)
        {
            if (y.second > 1)
            {
                res -= (y.second * (y.second - 1) );
            }
        }
        cout << res << endl;
    }

    return 0;
}