#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, count = 0, j = 0;
    int arr[] = {100, 50, 10, 5, 2, 1};
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &a);
        while(a != 0 && j != 6) {
            if(a >= arr[j]) {
                a = a - arr[j];
                count++;
                j = -1;
            }
            j++;
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}