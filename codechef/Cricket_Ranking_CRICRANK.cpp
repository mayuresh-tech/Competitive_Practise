#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int r1, w1, c1, r2, w2, c2;
        scanf("%d %d %d", &r1, &w1, &c1);
        scanf("%d %d %d", &r2, &w2, &c2);

        if((r1 > r2 && w1 > w2) || (w1 > w2 && c1 > c2) || (c1 > c2 && r1 > r2) || (r1 > r2 && w1 > w2 && c1 > c2)) {
            printf("A\n");
        }
        else {
            printf("B\n");
        }
    }
    return 0;
}