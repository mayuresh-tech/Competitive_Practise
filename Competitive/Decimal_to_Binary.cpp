#include <iostream>

using namespace std;

void decimalToBinary() {

	int a[10], n, i;
	cin >> n;

	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	cout << "Binary of the given number = ";

	for (i = i - 1; i >= 0; i--)
	{
		cout << a[i];
	}
}