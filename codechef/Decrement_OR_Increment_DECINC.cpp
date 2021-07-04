#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int a = 0;
    scanf("%d", &a);
        
    if(a % 4 == 0) {
        printf("%d\n", ++a);
    }
    else {
        printf("%d\n", --a);
    }

    return 0;
}