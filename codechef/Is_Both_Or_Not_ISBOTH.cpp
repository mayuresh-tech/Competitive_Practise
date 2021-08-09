#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long int ll;

int main() {

    ll number;
    scanf("%ld", &number);

    if(number % 5 == 0 && number % 11 == 0) {
        printf("BOTH\n");
    }
    else if(number % 5 == 0 || number % 11 == 0) {
        printf("ONE\n");
    }
    else {
        printf("NONE\n");
    }

    return 0;
}