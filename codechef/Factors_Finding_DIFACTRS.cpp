#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int number;
    int count = 0;
    vector<int> v;

    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        if(number % i == 0) {
            count++;
            v.push_back(i);
        }
    }

    vector<int>::iterator r = v.begin();

    cout << count << "\n";

    while(r != v.end()) {
        cout << *r << " ";
        r++;
    }

    printf("\n");

    return 0;
}