#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;

int main() {

    ll a = 0, b = 0, c = 0;

    scanf("%ld \n %ld \n %ld", &a, &b, &c);

    vector<ll> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    if(v[0] == v[1]) {
        printf("%ld\n", v[2]);
    }
    else {
        printf("%ld\n", v[1]);
    }

    return 0;
}