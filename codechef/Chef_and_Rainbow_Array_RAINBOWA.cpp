#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size, a = 0, temp;
    bool flag = false;
    scanf("%d", &size);
    int arrCheck[7] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < size; i++) {
        scanf("%d", &a);
        int arr[a];
        temp = (a/2) - 1;
        for(int i = 0; i < a; i++) {
            if(i > (a/2)) {
                scanf("%d", &arr[i]);
                if(arr[temp] == arr[i]) {
                    // do nothing;
                }
                else {
                    flag = true;
                }
                temp--;
            }
            else {
                scanf("%d", &arr[i]);
            }
        }
        if(flag) {
            printf("no\n");
        }
        else {
            printf("yes\n");
        }
    }

    return 0;
}