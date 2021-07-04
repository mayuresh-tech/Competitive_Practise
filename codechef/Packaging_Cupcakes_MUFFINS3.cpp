#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, temp = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        printf("%d\n", ((temp/2)+1));
    }

    return 0;
}