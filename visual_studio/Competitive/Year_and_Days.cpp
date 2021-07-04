#include <iostream>

using namespace std;

void printYearsAndDays() {

    long minutes;
    cin >> minutes;

    if (minutes < 0) {
       cout << "Invalid Value";
    }
    else {
        int years = (int)(minutes / 525600);
        int remainingMinutes = (int)(minutes % 525600);
        int days = remainingMinutes / 1440;

        cout << minutes << " min = " << years << " y and " << days << " d";
    }
}