#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int apples, oranges, coins;
        scanf("%d %d %d", &apples, &oranges, &coins);

        while(true) {
            if(coins > 0 && apples != oranges) {
                if(apples > oranges) {
                    oranges++;
                    coins--;
                }
                else if(oranges > apples) {
                    apples++;
                    coins--;
                }
            }
            else {
                break;
            }
        }
        printf("%d\n", abs(apples - oranges));
    }

    return 0;
}