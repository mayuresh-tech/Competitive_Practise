#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

int main() {

	vector<int> v;

	v.push_back(10);
	display(v);

	return 0;
}