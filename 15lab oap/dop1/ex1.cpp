#include <iostream>
#include <ctime>
// ������� 2
using namespace std;

void main(){
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* A;
	int n, markIndex, mark = 0;

	cout << "������� ����� �������: ";
	cin >> n;

	A = (int*)malloc(n * sizeof(int));

	if (!A) {
		cout << "Not enough memory";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		A[i] = static_cast<float>(rand()) / RAND_MAX * 20 - 10; // ���������� � ������ ��������� �����
		if (mark == 0) { // ��� ����, ����� ������ �� ������� � ���� �������, ���������� ������ ������� ( mark == 0 )
			if (A[i] < 0) {
				mark++; // ����������� ���� ����������, ������� �������� �� ��, ��������� �� � ������� ������ 1 ������������� �������
			}
		}
	}
	
	// � ������ ����� ������� ������ ���������� �������������� ����� � �������
	for (int i = 0; i < n; i++) {
		if (A[i] < 0) {
			markIndex = i;
		}
	}

	cout << "������: " << '\n';
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << ' ';
	}
	cout << '\n';

	if (mark != 0) { // ���� �� � ������� ������������� �������
		cout << '\n' << "� ������ ������� ���� ������ ���� ������������� �������" << '\n' << "������������ �� ������� ������������� �������: " << markIndex + 1 << endl;
	}
	else
		cout << "� ������� ��� ������������� ���������." << endl;
}