#include <iostream>
int sumPoint(int* u, int* y) {
	return ++(*u) + ++(*y);
}

int main() {
	int a[2][3] = {5,6,7,8}, b = 2;

	std::cout << ' ' << a << ' ' << b << std::endl;


	for (int i = 0; i < 2; i++) {
		for (int g = 0; g < 3; g++) {
			std::cout << a[i][g] << ' ';
		}
	}

	return 0;
}
