#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, b = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d %d", &a, &b);
        if(a > b) {
            printf(">\n");
        }
        else if(a < b) {
             printf("<\n");
        }
        else if(a == b) {
             printf("=\n");
        }
    }

    return 0;
}