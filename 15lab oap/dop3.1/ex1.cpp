#include <stdio.h>	
#include <stdlib.h>
#include <ctime>
#include <iostream>
// ������� 14
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* arr;
	int n, col = 0;

	cout << "������� ������ �������: ";
	cin >> n;

	if (!(arr = (int*)malloc(n * sizeof(int)))) // ��������� ��� ������ ����� ������� malloc() � ���������, ���� �� ����� � ������ ��� ����, ��� ���.  
	{
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++) // ���������� � ������ ��������� �����
	{
		arr[i] = rand() % 41 - 10; 
	}

	int max = arr[0];

	for (int i = 0; i < n; i++) { // ������� ������������ ������� � �������, ������� ��� �� �����������
		if (arr[i] >= max) {
			if (arr[i] = max) {
				col++;
			}
			max = arr[i];
		}
	}


	// ������� ������ ��� �������� �������� �������
	cout << "������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	std::cout << '\n' << "������������ ������� ������� ����������� : " << col << " ���" << endl;

	free(arr);
}
