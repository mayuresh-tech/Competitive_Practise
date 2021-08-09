#include <bits/stdc++.h>

using namespace std;

int main() {

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int n, d, h;
        int level = 0;

        string s = "NO";
        cin >> n >> d >> h;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                level += arr[i];
            }
            else {
                level = max(level - d, 0);
            }
        }
        if(level > h) {
            s = "YES";
            cout << s << endl;
        }
        else {
            cout << s << endl;
        }
    }
}
