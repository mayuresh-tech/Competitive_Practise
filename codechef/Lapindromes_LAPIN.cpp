#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size;
    string s, s1, s2;
    cin >> size;

    for(int i = 0; i < size; i++) {
        cin >> s;
        if(s.length() % 2 == 0) {
            s1 = s.substr(0, (s.length() / 2));
            s2 = s.substr((s.length() / 2), s.length());
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1.compare(s2) == 0) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
        else {
            s1 = s.substr(0, (s.length() / 2));
            s2 = s.substr((s.length() / 2) + 1, s.length());
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1.compare(s2) == 0) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }

    return 0;
}