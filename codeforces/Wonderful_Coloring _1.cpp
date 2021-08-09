#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ll testCases;
    cin >> testCases;

    while(testCases--) { 
        string s;
        cin >> s;

        int count;

        if(s.size() < 2){ 
            count = 0;
        }
        else{
            int val = 0;

            unordered_map<char, int> mp;
            for (int i = 0; i < s.size(); i++){
                mp[s[i]]++;
            }
            
            for (auto i: mp) { 
                if(i.second > 2) {
                    val = val + 2;
                }
                else {
                    val = val + i.second;
                }
            }
            count = val / 2;
        }
    cout << count << "\n";
    }
    return 0;
}
