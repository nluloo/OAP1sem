#include <iostream>

using namespace std;

int main() {

	const int SIZE = 6;
	int abc[SIZE] = { 6,-2,4,10,2,1 };

	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (abc[j] > abc[j + 1]) {
				int temp = abc[j];
				abc[j] = abc[j + 1];
				abc[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		cout << abc[i] << " ";
	}

	return 0;
}