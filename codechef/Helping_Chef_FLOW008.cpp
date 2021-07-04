#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, temp = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        if(temp < 10) {
            printf("Thanks for helping Chef!\n");
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}