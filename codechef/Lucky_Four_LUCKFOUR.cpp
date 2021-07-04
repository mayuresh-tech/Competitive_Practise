#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int size, temp = 0, count = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        while(temp != 0) {
            if(temp % 10 == 4) {
                count++;
            }
            temp /= 10;
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}