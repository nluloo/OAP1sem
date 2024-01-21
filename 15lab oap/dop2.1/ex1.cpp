#include <stdio.h>	
#include <stdlib.h>
#include <ctime>
#include <iostream>
// ������� 10
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* arr;
	int n, idMax = 0, idMin = 0, sum = 0, multi = 1;

	cout << "������� ������ �������: ";
	cin >> n;

	if (!(arr = (int*)malloc(n * sizeof(int)))) // ��������� ��� ������ ����� ������� malloc() � ���������, ���� �� ����� � ������ ��� ����, ��� ���.  
	{
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = static_cast<float>(rand()) / RAND_MAX * 41 - 20; // ���������� � ������ ��������� �����
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i]; // ������� ����� ���������, ������� ������ 0
		}
	}

	int maxOrMin = arr[0];
	for (int i = 0; i < n; i++) { // ������� ������ ������������� �������� � �������
		if (maxOrMin < arr[i]) {
			maxOrMin = arr[i];
			idMax = i; 
		}
	}

	maxOrMin = arr[0];
	for (int i = 0; i < n; i++) {// ������� ������ ������������ �������� � �������
		if (maxOrMin > arr[i]) {
			maxOrMin = arr[i];
			idMin = i;
		}
	}

	// ����� ����������� ����, ����� ������, ��� ����� ������ �������� ������������ ����-�����, ���� idMin ����� ������ ����� idMax, �� ���� ����� �����
	// ���� ������, �� ������
	if (idMin - idMax < 0) { 
		for (++idMin; idMin < idMax; idMin++) {
			multi *= arr[idMin];
		}
	}
	else
		for (++idMax; idMax < idMin; idMax++) {
			multi *= arr[idMax];
		}

	// ������� ������ ��� �������� �������� �������
	cout << "������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';


	std::cout << '\n' << "������������ ��������� ������� ����� ������������ � ����������� ���������: " << multi << '\n' << "����� ������������� ��������� �������: " << sum << endl;

	free(arr);
}
