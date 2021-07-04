#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main() {
    int size, temp = 0, sqrtTemp = 0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &temp);
        sqrtTemp = sqrt(temp);
        printf("%d\n", sqrtTemp);
    }

    return 0;
}