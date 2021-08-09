#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        long int amount;
        long int c1, c2;
        cin >> amount;

        if(amount % 3 == 0) {
            c1 = amount / 3;
            c2 = amount / 3; 
        }
        else if((amount - 1) % 3 == 0) {
            c2 = (amount - 1) / 3;
            c1 = c2 + 1;
        }
        else if((amount - 2) % 3 == 0) {
            c1 = (amount - 2) / 3;
            c2 = c1 + 1;
        }
        cout << c1 << " " << c2 << endl;
    }   

    return 0;
}