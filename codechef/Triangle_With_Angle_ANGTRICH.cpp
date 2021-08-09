#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sum;
    sum = a + b + c;

    if(a > 0 && a < 180 && b > 0 && b < 180 && c > 0 && c < 180 && sum == 180) {
	    printf("YES");
	}
    else {
        printf("NO");
    }

    return 0;
}