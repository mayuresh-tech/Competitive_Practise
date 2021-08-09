#include <iostream>

using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {
        int n, q;
        scanf("%d %d", &n, &q);
        int arr[n];
        int query[q*2];

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < (q * 2); i++) {
            scanf("%d", &query[i]);
        }

        int count = 0;
    }   
    return 0;
}