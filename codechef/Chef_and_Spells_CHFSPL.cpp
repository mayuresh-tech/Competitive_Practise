#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr+3);
        cout << (arr[1] + arr[2]) << endl;
    }

    return 0;
}