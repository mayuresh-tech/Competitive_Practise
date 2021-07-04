#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, b = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d %d", &a, &b);
        if(a > b) {
            printf("%d %d\n", a, a+b);
        }
        else {
            printf("%d %d\n", b, a+b); 
        } 
    }

    return 0;
}