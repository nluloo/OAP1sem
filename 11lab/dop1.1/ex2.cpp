#include <iostream>

using namespace std;
// 12 �������
void main() {
	setlocale(LC_ALL, "rus");
	// ���������� ���������� ���� int, ���������� ������� ���� char
	char tmp[33];
	int n, m, p, q;
	unsigned int A, B;

	//���� ����������
	cout << "������� ����� A = ";
	cin >> A;
	cout << "������� ����� B = ";
	cin >> B;
	cout << "������� ����� �����, ������� ������������ � 0 � ����� �: ";
	cin >> n;
	cout << "�������, ��� ����� ������ ����: ";
	cin >> p;
	cout << "������� ����� �����, ������� ������ ����� �� ����� B: ";
	cin >> m;
	cout << "�������, � ������� �� ������ �� �����: ";
	cin >> q;
	//�������������� ����� ��� ����� B � ������, � ������� ������, ������ ��� ������ ����� ��� ������ ������
	int maskA = 1;
	maskA = ~maskA;
	for (int i = 1; i < n; i++)
	{
		maskA = maskA << 1;
	}
	for (int i = 1; i < p; i++) {
		maskA = maskA << 1;
		maskA++;
	}
	for (int i = 0; i < n; i++) // ��� ������� �����������, �.� ��� �������, ��� ����� ������ ���� ������ �� �������� �������
	{
		maskA = maskA >> 1;
	}
	//�������������� ����� ��� ����� B � ������, � ������� ������, ������ ��� ������ ����� ��� ������ ������
	int maskB = 1;
	maskB = ~maskB;
	for (int i = 1; i < m; i++)
	{
		maskB = maskB << 1;
	}
	for (int i = 1; i < q; i++) {
		maskB = maskB << 1;
		maskB++;
	}
	maskB = ~maskB;

	// ����� �� ����� ����� � �������� �������������, �����, ��������� ����� � ������� �����
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;
	_itoa_s((A & maskA), tmp, 2);
	cout << "clear A: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "mask B: " << tmp << endl;
	_itoa_s((B & maskB) >> q - 1, tmp, 2);
	cout << "clear bit B: " << tmp << endl;
	_itoa_s(((A & maskA) | (((B & maskB) >> (q - 1))) << (p - n) - 1), tmp, 2);
	cout << "rezult = " << tmp << endl;

}