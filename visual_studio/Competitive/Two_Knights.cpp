/*

Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

*/
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

void knight() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli k;
    cin >> k;
    for (lli n = 1; n <= k; n++)
    {
        cout << n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << endl;
    }
}