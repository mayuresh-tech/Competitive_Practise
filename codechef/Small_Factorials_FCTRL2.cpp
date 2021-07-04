#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

cpp_int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}

int main() {

    fast_cin();

    int testCases;
    long number = 0;
    
    cin >> testCases;
    for(int i = 0; i < testCases; i++) {
        cin >> number;
        cout << fact(number) << endl;
    }

    return 0;
}