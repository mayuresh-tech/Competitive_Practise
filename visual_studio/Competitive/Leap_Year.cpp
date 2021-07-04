#include <iostream>

using namespace std;

void isLeapYear() {

    int year;
    cin >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
       cout << "Leap year";
    else
       cout << "Not a leap year";
}