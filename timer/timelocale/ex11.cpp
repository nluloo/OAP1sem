#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int hour, min, sec;

    cout << "������� ����, ������ � ������� (����� ������) ��� �������: ";
    cin >> hour >> min >> sec;

    int totalSeconds = hour * 3600 + min * 60 + sec; // ��������� ������� ������ � ����� ��������� ����������
   
    if(min < 60 && sec < 60) // ���� ������������ ������ ����� � ������ � ������� ������, ��� 60, �� ��������� �� ����������
    {
        while (totalSeconds != false) { // ���� ������ �� ���������, ���������� ��������� ����

            // ����� �� ����� �� ������ �������� ��� ����, �����, ����� ��� ������� � 00 � 59 (�� ��������) ������ � ���� ���� ������ ���� ��������
            hour = (totalSeconds % 216000) / 3600;
            min = (totalSeconds % 3600) / 60;
            sec = totalSeconds % 60;

            cout << "�������� �������: " << hour << " ����� " << min << " ����� " << sec << " ������" << endl;

            totalSeconds--; // ������� ������

            Sleep(1000); // �������� � ������ 1 �������
            system("cls"); // ������� �������
        }
        cout << "������ ��������!" << endl;
    }
    else {
        cout << "������� �������� ��������." << endl;
    }

    return 0;
}
