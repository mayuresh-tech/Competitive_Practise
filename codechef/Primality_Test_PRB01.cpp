#include <bits/stdc++.h>
#include<stdio.h>
#include <cmath>

using namespace std;

int main() {
    
    int size, a = 0;
    bool isPrime = true;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &a);
        if(a == 2 || a == 3) {
            isPrime = true;
        }
        else if(a <= 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 9 == 0) {
            isPrime = false;
        }
        else {
            for(int i = 2; i < sqrt(a) - 1; i++) {
                if(a % i == 0) {
                    isPrime = false;
                }
            }
        }
        if(isPrime) {
            printf("yes\n");
            isPrime = true;
        }
        else {
            printf("no\n");
            isPrime = true;
        }
    }

    return 0;
}