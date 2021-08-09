#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void fib_Even_by_a_number(ll end) {
    ll a = 0, b = 2, c = 2;
    cout << a << "\n" << b << "\n";
    while(end > c) {
        c = 4 * b + a;
        a = b;
        b = c;
        if (c > end) break;
        cout << c << "\n";
    }
}

void fib_Even_by_loop_count(ll end) {
    ll tempEnd = end;
    ll a = 0, b = 2, c = 2;
    cout << a << "\n" << b << "\n";
    while(tempEnd--) {
        c = 4 * b + a;
        a = b;
        b = c;
        cout << c << "\n";
    }
}

void fib_Even_Loop(ll end) {
    ll a = 0, b = 1, c = 0;
    for(ll i = 2; i < end; i++) {
        c = a + b;
        if(c % 2 == 0) {
            printf("%ld\n", c);
        }
        //printf("%ld\n", c);
        a = b;
        b = c;
    }
}

void fib_normal(ll end) {
    ll a = 0, b = 1, c = 0;
    cout << a << endl << b << endl;
    for(ll i = 2; i < end; i++) {
        c = a + b;
        printf("%ld\n", c);
        a = b;
        b = c;
    }
}

int main() {

    fast_cin();

    ll end = 0;
    scanf("%ld", &end);

    // printf("%d\n%d\n", a, b);

    fib_normal(end);
    //fib_Even_by_a_number(end);
    //fib_Even_Loop(end);
    //fib_Even_by_loop_count(end);

    return 0;
}