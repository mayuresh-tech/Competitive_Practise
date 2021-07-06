#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, oddCount = 0, evenCount = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &a);
        if(a % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if(evenCount > oddCount) {
        printf("READY FOR BATTLE\n");
    }
    else {
        printf("NOT READY\n");
    }

    return 0;
}