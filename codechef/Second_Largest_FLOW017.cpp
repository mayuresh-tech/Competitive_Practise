#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {

    int size, a = 0, b = 0, c = 0, sL = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a > c && a > b) {
            if(c > b) {
                printf("%d\n", c);
            }
            else {
                printf("%d\n", b);
            }
        }
        if(b > c && b > a) {
            if(c > a) {
                printf("%d\n", c);
            }
            else {
                printf("%d\n", a);
            }
        }
        if(c > b && c > a) {
            if(b > a) {
                printf("%d\n", b);
            }
            else {
                printf("%d\n", a);
            }
        }
    }

    return 0;
}