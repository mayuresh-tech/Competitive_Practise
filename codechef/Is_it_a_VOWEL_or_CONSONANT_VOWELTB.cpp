#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

typedef long long ll;

int main() {

    char arr[10] = {'A', 'E', 'I', 'O', 'U'};
    char* end = arr + sizeof(arr) / sizeof(arr[0]); 

    char ip;
    scanf(" %c", &ip);
    
    if(find(arr, end, ip) != end) {
        printf("Vowel\n");
    }
    else {
        printf("Consonant\n");
    }
    return 0;
}