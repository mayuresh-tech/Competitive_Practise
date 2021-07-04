#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream fin1, fin2;
	int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	char ch;

	fin1.open("even.txt");
	if (fin1.fail()) {
		cout << "Error opening file";
	}

	fin2.open("odd.txt");
	if (fin2.fail()) {
		cout << "Error opening file";
	}

	for (int i = 0; i < 15; i++) {
		if (arr[i] % 2 == 0) {
			fin1 << arr[i] << " ";
		}
		else {
			fin2 << arr[i] << " ";
		}
	}

	fin1.close();
	fin2.close();

	ifstream fout1, fout2;

	fout1.open("even.txt");
	if (fout1.fail()) {
		cout << "Error opening file";
	}

	fout2.open("odd.txt");
	if (fout2.fail()) {
		cout << "Error opening file";
	}

	cout << "\nEven numbers list: ";
	while (fout1) {
		fout1.get(ch);
		cout << ch;
	}

	cout << "\nOdd numbers list: ";
	while (fout2) {
		fout2.get(ch);
		cout << ch;
	}

	fout1.close();
	fout2.close();

	return 0;
}
