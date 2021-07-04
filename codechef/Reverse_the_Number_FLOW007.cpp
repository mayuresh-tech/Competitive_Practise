#include <bits/stdc++.h> 

using namespace std;

int main() {

    int size, temp = 0, rev = 0, rem = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("%d\n", rev);
        rev = 0;
    }

    return 0;
}