#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;

// O(n)
ll calculatePowerForLoop(int a, int n) {
    ll temp = 1;
    for(int i = 1; i <= n; i++) {
        temp = temp * a;
    }
    return temp;
}

// O(log n)
ll calculatePowerFactorial(int a, int n) {
    if(n == 0) {
        return 1;
    }
    if(n % 2 == 0) {
        ll half = calculatePowerFactorial(a, n / 2);
        return half * half;
    }
    else {
        ll half = calculatePowerFactorial(a, floor(n / 2));
        return half * half * a;
    }
}

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main() {

    int testCases, a, n;
    ll ans = 0;
    scanf("%d", &testCases);

    while(testCases--) {
        scanf("%d %d", &a, &n);
        ans = binpow(a, n);
        printf("%ld\n", ans);
        ans = 0;
    }

    return 0;
}