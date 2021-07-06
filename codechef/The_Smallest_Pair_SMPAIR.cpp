#include <bits/stdc++.h>
#include<stdio.h>

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {

    fast_cin();
    
    int testCases, size;
    int min = INT_MAX, sMin = INT_MAX, temp;
    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++) {
            cin >> temp;
            arr[i] = temp;
            if(min > temp) {
                min = temp;
            }
        }
        for(int i = 0; i < size; i++) {
            if(sMin > arr[i] && arr[i] != min) {
                sMin = arr[i];
            }
        }
        cout << (min + sMin) << endl;
        min = INT_MAX, sMin = INT_MAX, temp = 0;
    }

    return 0;
}