#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int lenOfString, count = 0;
        cin >> lenOfString;

        string str;
        cin >> str;

        string temp = str;
        sort(str.begin(), str.end());
        for(int i = 0; i < lenOfString; i++) {
            if(str[i] != temp[i]) {
                count++;
            }
        }
        cout << count << endl;
    }   
    return 0;
}