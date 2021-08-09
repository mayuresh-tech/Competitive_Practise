#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    int testCases, gesNum = 0;
    bool indian = false, notIndian = false, unsure = false;
    scanf("%d", &testCases);

    while(testCases--) {    
        scanf("%d", &gesNum);

        char guesses[gesNum]; 
        scanf("%s", &guesses);
        for(int i = 0; i < gesNum; i++) {
            if(guesses[i] == 'I') {
                indian = true;
            }
            else if(guesses[i] == 'Y') {
                notIndian = true;
            }
            else {
                unsure = true;
            }
        }
        if(indian) {
            printf("INDIAN\n");
        }
        else if(notIndian) {
            printf("NOT INDIAN\n");
        }
        else {
            printf("NOT SURE\n");
        }
        indian = false, notIndian = false, unsure = false;
    }

    return 0;
}