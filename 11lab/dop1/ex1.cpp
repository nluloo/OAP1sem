#include <iostream> 

using namespace std;

// 11 �������
void main()
{
	setlocale(LC_CTYPE, "Russian");
	// ���������� ���������� ���� int � ������� char
	int A;
	char tmp[33];
	// ���� �����
	cout << "������� ����� ";
	cin >> A;
	// ������� ����� � �������� ����
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;
	if ((A & 15) == 0) // ������� ��������� ��� ����� A � ���������� ������� �� �����
		cout << "����� ������ 16" << endl;
	else
		cout << "����� �� ������ 16" << endl;
}
