#include<iostream>

using namespace std;

typedef long long int ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

    fast_cin();

    ll arr[3];
    int count, testCases;
    bool flag = true;

    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        
        cin >> arr[0] >> arr[1] >> arr[2];

        while(flag) {
            if(arr[0] > 0 && arr[1] > 0 && arr[2] > 0) {
                arr[0]--;
                arr[1]--;
                arr[2]--;
                count++;
            }
            else if(arr[0] == 0 && arr[1] > 0 && arr[2] > 0) {
                arr[1]--;
                arr[2]--;
                count++;
                flag = false;
            }
            else if(arr[0] > 0 && arr[1] == 0 && arr[2] > 0) {
                arr[0]--;
                arr[2]--;
                count++;
                flag = false;
            }
            else if(arr[0] > 0 && arr[1] > 0 && arr[2] == 0) {
                arr[0]--;
                arr[1]--;
                count++;
                flag = false;
            }
        }

        cout << count;
    }

    return 0;
}