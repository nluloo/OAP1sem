#include <iostream>

using namespace std;
// 2 �������
void main() {
	setlocale(LC_ALL, "ru");
	// ��������� ���������� ���� int � ������ ���� char
	char tmp[33];
	int n, p;
	unsigned int A, B;

	// ���� �����
	cout << "������� ����� A = ";
	cin >> A;
	cout << "������� ������� ����� ������ ��������: ";
	cin >> n;
	cout << "������� ������� �����, ������� ������ ��������: ";
	cin >> p;
	// ������� ����� ��� ����� � 
	int maskA = 1;
	maskA = ~maskA;
	// ����� � ������, ��� ����� � ��� �������� �����������, �� ������ ������ ��� ����� �������, ������� � ������������ maskA � ������ � ������� ������
	for (int i = 1; i < n; i++)
	{
		maskA = maskA << 1;
	}
	for (int i = 1; i < p; i++) {
		maskA = maskA << 1;
		maskA++;
	}
	// ������ ���� ������������ ��� ����, ����� ����� ����� �� ����� ������ �������, � ������
	for (int i = 0; i < n; i++)
	{
		maskA = maskA >> 1;
	}
	maskA = ~maskA; // ����� ���� �������� ����������� �������

	// ������� � � �������� ���� � ����� ��� �, ����� ������, ��� ��������
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;
	// � � ����� ������� ��������� ���������� �����
	_itoa_s(A | maskA, tmp, 2);
	cout << "Change A: " << tmp << endl;
}