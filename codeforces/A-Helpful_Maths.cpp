#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    string s;
    cin >> s;
    int arr[10001];
    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        if((s[i] - '0' != -5)) {
            arr[count] = (s[i] - '0');
            count++;
        }
    }

    sort(arr, arr+count);

    int ans = 0;
    for(int i = 0; i < count; i++) {
        if(i == (count - 1)) {
            cout << arr[i] << endl;
        } else {
            cout << arr[i] << "+";
        }
    }
    return 0;
}