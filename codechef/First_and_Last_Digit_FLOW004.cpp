#include <bits/stdc++.h> 

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int testCases = 0, a = 0, first = 0, last = 0;
    bool foundLast = false;
    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        cin >> a;
        while(a != 0) {
            if((a/10) == 0) {
                first = a % 10;
            }
            if(!foundLast) {
                last = a % 10;
                foundLast = true;
            }
            a /= 10;
        }

        cout << first + last << endl;
        first = 0;
        last = 0;
        foundLast = false;
    }

    return 0;
}