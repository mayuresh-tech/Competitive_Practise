#include <iostream>
using namespace std;

void zeroes()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        total += n / i;
    }
    cout << total;
}