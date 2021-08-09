#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {

    int testCases, coins, people, temp = 0;
    scanf("%d", &testCases);

    while(testCases--) {
        scanf("%d %d", &coins, &people);

        for(int i = 1; i <= people; i++) {
            if(coins % i > temp) {
                temp = coins % i;
            }
        }
        printf("%d\n", temp);
        temp = 0;
    }
    return 0;
}