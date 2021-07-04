/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.
*/
#include <iostream>

using namespace std;

void repitition() {
    string s;
    cin >> s;

    int n = s.length(), rep = 1, check = 0;

    for (int i = 0; i < n; i++) {

        if (s[i] != s[i + 1]) {
            check = max(check, rep);
            rep = 0;
        }
        rep++;
    }
    check = max(check, rep);
    cout << check;
}