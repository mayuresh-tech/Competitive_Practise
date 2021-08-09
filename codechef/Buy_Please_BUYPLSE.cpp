#include <bits/stdc++.h>
#include<cstdio>

typedef long long int ll;

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int countPen, pricePen, countPencils, pricePencils;
    scanf("%d %d %d %d", &countPen, &countPencils, &pricePen, &pricePencils);
    
    ll finalPrice = (countPen * pricePen) + (countPencils * pricePencils);

    printf("%ld\n", finalPrice);

    return 0;
}