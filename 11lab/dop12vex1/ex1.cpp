#include <iostream>

using namespace std;
// 12 �������
void main() {
	setlocale(LC_CTYPE, "Russian");
	// ��������� ��������� ���� int � ������ char
	char tmp[33];
	unsigned int A;

	//���� ����� � ����������
	cout << "������� ����� � = ";
	cin >> A;

	int maskA = 31 << 3; // �������� ����� ��� �������������� ���� ����� ������� � 4 ���������� 8 ������������
	// ������� �� ����� ����� ��� �, ���� � � �������� ���������
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;
	_itoa_s((A ^ maskA), tmp, 2); // ����� ���������� �������������� ����� � 4 �� 8
	cout << "rezult A: " << tmp << endl;
}