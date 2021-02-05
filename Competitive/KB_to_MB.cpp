#include <iostream>

using namespace std;

void printMegaBytesAndKiloBytes() {

    int kiloBytes;
    cin >> kiloBytes;

    int convertedMB = 0;
    int remainingKB = 0;

    if (kiloBytes < 0) {
       cout << "Invalid Value";
    }
    else {
        convertedMB = kiloBytes / 1024;
        remainingKB = kiloBytes % 1024;
        cout << kiloBytes << " KB = " << convertedMB << " MB and " << remainingKB << " KB";
    }
}