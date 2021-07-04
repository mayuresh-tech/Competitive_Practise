/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

*/
#include <iostream>

using namespace std;

void missing() {
    long long int n, s = 0, ele;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> ele;
        s += ele;
    }
    cout << n * (n + 1) / 2 - s;
}