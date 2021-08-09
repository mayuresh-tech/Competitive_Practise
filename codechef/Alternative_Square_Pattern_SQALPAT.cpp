#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, z = 0;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        if(i % 2 != 0) {
            for (int j = 1; j <= 5; j++)
            {
                cout << j + z * 10 << " ";
            }
            z++;
        }
        else if(i % 2 == 0) {
            for(int j = 10; j > 5; j--) {
                cout << j + i * 5 - 10 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}