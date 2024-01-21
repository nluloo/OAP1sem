#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	srand(time(0));
	const int n = 4;
	float arr[n][n];
	float max = 0;

	for (int i = 0; i < n; i++) { // ������� ����� ������ � ���������� � ���� �������� � ������� ������� rand()
		for (int g = 0; g < n; g++) {
			arr[i][g] = static_cast<float>(rand()) / RAND_MAX * 20;
		}
	}

	for (int i = 0; i < n; i++) { // � ������ ����� ������� ������������ ��������
		for (int g = 0; g < n; g++) {
			if (max < arr[i][g]) {
				max = arr[i][g];
			}
		}
	}
	
	for (int i = 0; i < n; i++) { // � ���� ����� �� ������ ������������ ������� �� ������� ���������
		for (int g = 0; g < n; g++) {
			if (i == g) {
				arr[i][g] = max;
			}
		}
	}
	for (int i = 0; i < n; i++) { // ������ ������ � �������� ���������
		for (int g = 0; g < n; g++) {
			cout << setprecision(3) << arr[i][g] << '\t';
		}
		cout << '\n';
	}

}