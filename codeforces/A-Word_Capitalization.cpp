#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    string s;
    cin >> s;

    if(s[0] >= 97) {
        s[0] -= 32;
    }    

    cout << s << endl;
    return 0;
}