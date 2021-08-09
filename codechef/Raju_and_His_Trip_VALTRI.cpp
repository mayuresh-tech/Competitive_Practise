#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    ll a;

    scanf("%ld", &a);

    if(a % 5 == 0 || a % 6 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}