#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int hourUser, minUser, secUser, newHour, newMin, newSec;

    cout << "������� ��������� ����� (����, ������, �������), ����� ������: ";
    cin >> hourUser >> minUser >> secUser;

    cout << "������� ����������������� ������� (����, ������, �������), ����� ������: ";
    cin >> newHour >> newMin >> newSec;

    int totalTimeInSeconds = (newHour * 3600 + newMin * 60 + newSec) % (24 * 3600); // ������� ��� ������ ��� ������, ����� ������������ ��� ������� �������� ��� �������� �������( ���, ������)

    if (hourUser < 24 && minUser < 60 && secUser < 60) { // ������� ��� �������� ����, ��������� �� ������������ ���� ����� ��� ���
        while (totalTimeInSeconds > 0) {


            if (secUser >= 60) { // ���� ������� ��������� ������� 60 ��� ����, �� �� ����������� �������� 0, � � ����� �������� 1
                secUser = 0;
                minUser++;
            }

            if (minUser >= 60) { // ���� ����� ������ � ��������, ������ ����� ��� ���������� � �����
                minUser = 0;
                hourUser++;
            }

            if (hourUser >= 24) { // �������� ����, ����� ��� ����� �� 24
                hourUser = 0;
            }

            cout << hourUser << ":" << minUser << ":" << secUser << endl; // ������� ���� �����

            Sleep(1000); // ����� ��� �������� ����� 1 ������� ����� �������� ������� sleep � � ��� �������� �������� � ������������
            system("cls"); // ����� � ��� ����� ����� �� ���������� � ����� �������, �� ����� ������� �������

            secUser++; // ���������� �����
            totalTimeInSeconds--; // ����� ������ ��������� ��������� ����, �� ���� �����������, ��� ��������, ��� ��� ������ �������� ���� ������
        }
        cout << hourUser << ":" << minUser << ":" << secUser << endl;
        cout << "������ ��������!" << endl;

    }
    else {
        cout << "������ ������������ ������ �������." << endl; // ����� �� ������, ���� ������������ ���� ������������ �����
    }


    return 0;
}
