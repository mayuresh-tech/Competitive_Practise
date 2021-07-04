#include <bits/stdc++.h> 
#include <stdio.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
         printf("%d\n",arr[i]);
    }

    return 0;
}