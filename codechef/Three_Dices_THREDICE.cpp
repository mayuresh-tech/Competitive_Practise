#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int a, b, c = 6;
        scanf("%d %d", &a, &b);
        int check = c - (a + b);

        if(0 >= check) {
            printf("0\n");
        }
        else if(check > 0) {
            
            cout << (static_cast<double>(check) / 6) << "\n";
        }
    }

    return 0;
}