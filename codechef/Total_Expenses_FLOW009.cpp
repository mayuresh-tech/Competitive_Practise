#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size;
    double sum = 0, a, b;
    double finalAmount = 0;
    cin >> size;

    for(int i = 0; i < size; i++) {
        cin >> a >> b;
        sum = a * b;
        if(a > 1000) {
            finalAmount = sum - (sum * 10 / 100);
        }
        else {
            finalAmount = sum;
        }
        cout << setprecision(6) << fixed << finalAmount << endl;
        finalAmount = 0, sum = 0, a = 0, b = 0;
    }

    return 0;
}