#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {

    int testCases, ingre, temp = 0, numGcd = 0;
    bool flag;
    
    scanf("%d", &testCases);

    while(testCases--) {
        scanf("%d", &ingre);
        int arr[ingre];
        temp = ingre;
        while(temp--) {
            cin >> arr[temp];
            numGcd = gcd(numGcd, arr[temp]);
        }

        while(ingre--) {
            arr[ingre] = arr[ingre] / numGcd;
            printf("%d ", arr[ingre]);
        }
        printf("\n");
        numGcd = 0;
    }


    return 0;
}