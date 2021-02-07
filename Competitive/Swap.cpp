/* Swap without Third variable */
#include <iostream>

using namespace std;

void swap() {

	int a, b;
	cin >> a >> b;

	cout << "Before swap a = " << a << " b = " << b << endl;
	a = a * b;   
	b = a / b;   
	a = a / b;    
	cout << "After swap a = " << a << " b = " << b << endl;
}