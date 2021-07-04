#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, b = 0, c = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if((a + b + c) == 180) {
            printf("YES\n");
        }
        else {
           printf("NO\n");
        } 
    }

    return 0;
}