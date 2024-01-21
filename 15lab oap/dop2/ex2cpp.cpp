#include <iostream>
#include <ctime>
// ������� 2
using namespace std;

void main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int n, m, str = 0, max;
    cout << "������� ���������� ����� � �������� �������(����� ������): ";
    cin >> n >> m;

    int** arr = new int* [n]; // ������� ��������� ������ ��� �����

    for (int i = 0; i < n; i++)
        arr[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 101 - 10; // ���������� � ������� ��������� ��������
        }
    }

    int strind, colind;

    cout << "������� �� ���������: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
    cout << '\n';

    max = arr[0][0]; // ����������� ���������� max �������� 1 �������� ������� � � ������� �� ������� ������������ ������� ������� � ����. �����

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                strind = i; // � ����� ���������� ���������� ������� ��������(������ � �������)
                colind = j;
            }
        }
    }
    swap(arr[0][0], arr[strind][colind]); // ������ ������� ������ ������� � ������������ ������� �������

    cout << "������� ����� ���������: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}