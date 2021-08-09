#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {

    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for (int j = num; j >= 1; j--)
        {
            if(i >= j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        if(i != num) {
            printf("\n");
        }
    }
    return 0;
}