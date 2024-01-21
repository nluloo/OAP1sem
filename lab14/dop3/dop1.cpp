#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main() {

	srand(time(0));
	const int N = 2;
	const int n = 2 * N;
	int arr[n][n];

	for (int i = 0; i < n; i++) { // Записываем в наш массив элементы(от -10 до 10)
		for (int g = 0; g < n; g++) {
			arr[i][g] = rand() % 21 - 10;
		}
	}

	cout << "first: " << '\n';

	for (int i = 0; i < n; i++) { // Для наглядности выводим массив
		for (int g = 0; g < n; g++) {
			cout << arr[i][g] << '\t';
		}
		cout << '\n';
	}

	for (int i = 0; i < N; i++) { // Меняем положение элементов согласно схеме
		for (int g = 0; g < N; g++) {
			int temp = arr[i][g];
			arr[i][g] = arr[N + i][N + g];
			arr[N + i][N + g] = temp;

			int temp1 = arr[N + i][g];
			arr[N + i][g] = arr[i][N + g];
			arr[i][g + N] = temp1;
		}
	}
	cout << "last: " << '\n';
	for (int i = 0; i < n; i++) { // Выводим измененный массив
		for (int g = 0; g < n; g++) {
			cout << arr[i][g] << '\t';
		}
		cout << '\n';
	}
}