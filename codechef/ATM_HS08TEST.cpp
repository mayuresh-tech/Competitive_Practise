#include <bits/stdc++.h> 

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    int x = 0; double y = 0.0;
    cin >> x;
    cin >> y;
    
    if(x%5 == 0 && y-x-0.50 >= 0) {
        y = (y - x) - 0.50;
        cout << fixed << setprecision(2) << y << endl;
    }
    else {
        cout << fixed << setprecision(2) << y << endl;
    }

    return 0;
}