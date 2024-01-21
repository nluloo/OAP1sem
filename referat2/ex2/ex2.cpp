#include <iostream>

using namespace std;

int main() {
	int n, i;
	i = 2;

	cout << "At me beggining: i = " << i << '\n';
	cout << "After n = ++i :\n";
	n = ++i;

	cout << "\tn = " << n << "\n";
	cout << "\ti = " << i << "\n";
	cout << "\n";

	return 0;
}