#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int a;
        scanf("%d", &a);

        if(a % 10 == 0) {
            printf("0\n");
        }
        else if(a % 5 == 0) {
            printf("1\n");
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}