#include <iostream>

using namespace std;

int main()
{
    const int n = 5;
    int arr[n][n];

    for (int i = 0; i < n; i++){ // ������� ������ � ���������� �� 1 �� 5
        for (int g = 0; g < n; g++){
            arr[i][g] = (i + g) % n + 1; // ����������� ������ ��������� �����
        }
    }

    for (int i = 0; i < n; i++){ // ����� �����������
        for (int g = 0; g < n; g++){
            cout << arr[i][g] << " ";
        }
        cout << '\n';
    }
    return 0;
}