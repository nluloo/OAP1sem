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
	float* arr;
	int n, idMax, C, col = 0;
	float max = 0, perem = 1;

	cout << "������� ������ �������: ";
	cin >> n;
	cout << "������� �����, ������� ����� �������������� ������: ";
	cin >> C;

	if (!(arr = (float*)malloc(n * sizeof(int)))) // ��������� ��� ������ ����� ������� malloc() � ���������, ���� �� ����� � ������ ��� ����, ��� ���.  
	{	                                      
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = static_cast<float>(rand()) / RAND_MAX * 20; // � ��� ������ ���������� ��������� ����� �� 0 �� 20. ����� ����� ���� float
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > C) {
			col++; // ������� ���������� ���������, ������� ����� ������ �����, ���������� � ����������
		}
	}

	for (int i = 0; i < n; i++) {
		if (max < abs(arr[i])) {
			max = abs(arr[i]);
			idMax = i; // ������� ������ ������������� �������� �� ������
		}
	}

	// ������� ������ ��� �������� �������� �������
	cout << "������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	for (idMax = idMax + 1; idMax < n; idMax++) { // ��������� ������������ ����� ����� ������������� ��������
		perem *= arr[idMax];
	}

	std::cout << '\n' << "������������ ������� �������: " << max << '\n' << "������������ ����� ����� ������������� ���������: " << perem << '\n' << "���������� �����, ������ ���������� �����: " << col << endl;

	free(arr);
}
