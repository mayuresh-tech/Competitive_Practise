#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size;
    double grossSalary = 0, temp = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%lf", &temp);
        if(temp >= 1500) {
            grossSalary = temp + 500 + (temp * 98 / 100);
        }
        else {
            grossSalary = temp + (temp * 10 / 100) + (temp * 90 / 100);
        }
        printf("%lf\n", grossSalary);
        grossSalary = 0, temp = 0;
    }

    return 0;
}