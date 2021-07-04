/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

*/
#include <iostream>

using namespace std;

void incre_array() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    long long int arr[100000];

    for (long long int i = 0; i < n; i++)
        cin >> arr[i];

    long long int total = 0, m = arr[0];

    for (long long int i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout << total;
}