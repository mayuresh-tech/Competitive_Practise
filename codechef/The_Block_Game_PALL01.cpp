#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, rem = 0, rev = 0, temp = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &a);
        temp = a;
        while(a != 0) {
            rem = a % 10;
            rev = rev * 10 + rem;
            a /= 10;
        }
        if(temp == rev) {
            printf("wins\n");
        }
        else {
            printf("loses\n");
        }
        rev = 0, rem = 0, a = 0, temp = 0;
    }

    return 0;
}