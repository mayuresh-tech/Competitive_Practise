#include <bits/stdc++.h>
#include<string.h>

using namespace std;

typedef long long int ll;

int main() {

    int testCases;
    cin >> testCases;

    while(testCases--) {
        string s;
        cin >> s;
        if(s.length() > 10) {
            cout << s[0] << (s.length() - 2) << s[(s.length() - 1)] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}