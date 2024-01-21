#include <iostream>
#include <stdio.h>
#include <ctime>
#include <iomanip>

int main() {
	srand(time(0));
	const int m = 4, n = 5, k = 6;
	int arr[m][n][k], j = 0;
	int arr1[m * n*k];

	for (int i = 0; i < m; i++) {
		for (int g = 0; g < n; g++) {
			for(int s = 0; s < k; s++)
			{
				arr[i][g][s] = rand() % 100;
				std::cout << std::setw(3) << arr[i][g][s]  << ' ';
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < m; i++) {
		for (int g = 0; g < n; g++) {
			for (int s = 0; s < k; s++)
			{
				arr1[j] = arr[i][g][s];
				j++;
			}
		}
	}

	j = 0;
	std::cout << "\n";
	for (int i = 0; i < m * n*k; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << "\n\n\n";

	for (int i = 0; i < m; i++) {
		for (int g = 0; g < n; g++) {
			for (int s = 0; s < k; s++)
			{
				arr[i][g][s] = arr1[j];
				j++;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int g = 0; g < n; g++) {
			for (int s = 0; s < k; s++)
			{
				std::cout << std::setw(3) << arr[i][g][s] << ' ';
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}

	return 0;
}

