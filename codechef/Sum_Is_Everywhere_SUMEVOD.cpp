#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    ll num, oddSum = 1, evenSum = 2;

    scanf("%ld", &num);

    for(int i = 2; i <= num; i++) {
        if(num == 1) {
            break;
        }
        else if(num == 0) {
            printf("0 0");
        }
        else {
            oddSum = oddSum + (2 * i) - 1;
            evenSum = evenSum + (2 * i);
        }
    }

    printf("%ld %ld", oddSum, evenSum);

    return 0;
}