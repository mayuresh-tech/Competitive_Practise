#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {

    int size, toFind;
    bool flag = false;

    scanf("%d %d", &size, &toFind);

    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == toFind) {
            flag = true;
            break;
        }
    }

    if(flag) {
        printf("1");
    }
    else {
        printf("-1");
    }

    return 0;
}