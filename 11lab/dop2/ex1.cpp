#include <iostream>
using namespace std;
 // 2 �������
void main(){
	setlocale(LC_ALL, "ru");
	// ���������� � ����������������� ���������� ���� int, ���������� ������� ���� char
	char tmp[33];
	int A, B, maskA = 31;
	int maskB = (~maskA << 2) + 3;

	// ���� �����
	cout << "������ ����� �=";
	cin >> A;
	cout << "������ ����� �=";
	cin >> B;
	
	// ������� ��������� ���������� ����� � ��������� ��� � ������� �� ����, ������� ����� �������� �� �������
	// ����� ������� ��������� ����� ���������
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1) << 2), tmp, 2);
	cout << "��������� B=" << tmp << endl;
}
