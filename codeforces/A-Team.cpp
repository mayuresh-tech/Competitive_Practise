#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases;
    cin >> testCases;

    int count = 0;

    while(testCases--) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;

        if(a == 1 && b == 1 || c == 1 && a == 1 || b == 1 && c == 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}