#include <iostream>

using namespace std;

void toMilesPerHour() {

    double kiloPerHour;
    cin >> kiloPerHour;

    double milesPerHour = 0;
    double value = 0;

    if (kiloPerHour < 0) {
        cout << "Check input";
    }
    else {
        value = (kiloPerHour / 1.6093440);

        milesPerHour = round(value);
    }

    cout << milesPerHour;
}