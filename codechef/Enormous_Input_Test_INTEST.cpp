#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int count = 0, input, divisor, temp;
    cin >> input >> divisor;

    for(int i = 0; i < input; i++) {
        cin >> temp;

        if(temp % divisor == 0) {
            count++;
        } 
    }
    cout << count;

    return 0;
}