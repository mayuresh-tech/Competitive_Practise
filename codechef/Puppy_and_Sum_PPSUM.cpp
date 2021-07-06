#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, sum = 0, a, b;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d %d", &a , &b);
        sum = b;
        while(a != 0) {
            sum = (sum * (sum + 1) / 2);
            a--;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}