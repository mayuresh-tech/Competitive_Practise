#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int n = 0, k = 0, count = 0;
    cin >> n >> k;

    int arr[10000];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] >= arr[(k - 1)]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}