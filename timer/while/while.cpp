#include <iostream>

using namespace std;

int main() {
	const int ogr = 5;
	int a, sum = 0, i = 0;

	while (i < 5) {
		cin >> a;
		sum += a;
		i++;
	}
	cout << sum << endl;
	return 0;
}