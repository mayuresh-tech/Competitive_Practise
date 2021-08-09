#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases, x = 0;
    cin >> testCases;

    while(testCases--) {
        string s;
        cin >> s;
        
        if(s[0] == '+' && s[1] == '+' && s[2] == 'X' || s[1] == '+' && s[2] == '+' && s[0] == 'X' ) {
            x++;
        }
        else if(s[0] == '-' && s[1] == '-' && s[2] == 'X' || s[1] == '-' && s[2] == '-' && s[0] == 'X' ) {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}