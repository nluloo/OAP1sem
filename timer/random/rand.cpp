#include <iostream>
#include <ctime>

using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int randomNumber = rand() % 501; // ������������ �������� ����������� ���� �� 500 (��������: �� 0 �� 500)
	int numberUser, x, counter = 0;

	cout << "������� �������������� ����� (�� 0 �� 500): ";
	cin >> numberUser;

		while (numberUser != randomNumber) { // ���� �����������, ���� �� �������� ������������ �����

			if (numberUser > 500) { // ������� ��� ����, ����� ������������ ������ ����� � ��������� �� 0 �� 500, ���� ������ ������, �� ��������� �������� ���� ������
				cout << "������� �����, ��������� �� ��������. ";
				break;
			}
				if (counter <= 3) // ������ ������� ������� ��� ����, ����� ����� ���������� ������������ ���������
				{
					// � ������ ���� �������� ����������� ������ ��� ������ �����, �������� �������������
					if (numberUser < randomNumber) {
						cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
					}
					if (numberUser > randomNumber) {
						cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
					}
				}
				counter++;
				

				if (counter >= 3) { // ��� �������� � ���������� ������������ ������ ���� �������
					break;
				}

				cout << "������� �������������� �����: "; // ��������� ���� ������� �����, �.� ��� ����� ��������� �����, ��������� ������ ���, � ������� �� ����� ��������� ��������
				cin >> numberUser; 


		}
		if (numberUser == randomNumber) {
			cout << "\n" << "�� ������� �����!" << endl;
		}
		


	// ���� �� 3 ���� ������������ �� ������ ����� ��� ��������� ����������� � ���������
	if (counter >= 3) {

		cout << "������ �������� ���������? ( 1 - ��, 2 - ���)" << endl; 
		cin >> x;

		switch (x)
		{
		case 1:
			
			cout << "���������� ����� ��������� � ��������� �� " << (randomNumber / 100) * 100 << " �� " << (randomNumber / 100 + 1) * 100 << endl;

			if (randomNumber % 2 == 0)
				cout << "���������� ����� ������ \n" << endl;
			else
				cout << "���������� ����� �������� \n" << endl;
			
			while (numberUser != randomNumber) {
				if (numberUser > 500) {
					cout << "������� �����, ��������� �� ��������. ";
					break;
				}

				cout << "������� �������������� �����: ";
				cin >> numberUser;

				counter++;
				if (numberUser < randomNumber) {
					cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
				}
				if (numberUser > randomNumber) {
					cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
				}
			}
			if (numberUser == randomNumber) {
				cout << "\n" << "�� ������� �����!" << endl;
			}
			break;
		case 2:
			while (numberUser != randomNumber) {

				if (numberUser > 500) {
					cout << "������� �����, ��������� �� ��������. ";
					break;
				}

				cout << "������� �������������� �����: ";
				cin >> numberUser;

				counter++;
				if (numberUser < randomNumber) {
					cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
				}
				if (numberUser > randomNumber) {
					cout << "������ ����� ������, ��� ���������� �����������. \n" << endl;
				}
			}

			if (numberUser == randomNumber) {
				cout << '\n' << "�� ������� �����!" << endl;
			}
			break;
		default:
			cout << "������ �������� �������." << endl;
			break;
		}
	}
	if (numberUser == randomNumber)
	{
		cout << "����� " << randomNumber << " ���� �������� �����������." << '\n' << "��� ������������� " << counter << " �������(-��), ����� ������� �����." << endl;
	}
}