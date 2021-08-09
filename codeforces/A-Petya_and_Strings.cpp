#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] >= 97) {
            s1[i] -= 32;
        }
        if(s2[i] >= 97) {
            s2[i] -= 32;
        }
    }

    if(s1 > s2) {
        cout << "1\n";
    }
    else if(s2 > s1) {
        cout << "-1\n";
    }
    else if(s1 == s2) {
        cout << "0\n";
    }

    return 0;
}