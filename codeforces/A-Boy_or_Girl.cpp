#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    string s;
    cin >> s;
    int count = 0;

    sort(s.begin(), s.end());

    for(int i = 0; i < s.length(); i++) {
        if((i + 1) < s.length() && s[i] != s[i+1]) {
            count++;
        }
    }

    if(count & 1) {
        cout << "CHAT WITH HER!\n";
    }
    else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}