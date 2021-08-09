#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    ll a, b;

    scanf("%ld %ld", &a, &b);

    for(ll i = a; i <= b; i++) {
        if(i % 2 != 0) {
            printf("%ld ", i);
        }
    }

    return 0;
}