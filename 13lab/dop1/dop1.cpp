#include <iostream>
#include <string>

using namespace std;
// 1 ���
int main() {
    setlocale(LC_ALL, "ru");
    const int maxSize = 300;
    int k = 0;
    char arr[maxSize];
    char symbol;

    cout << "������� ������������������ ���� ����� ������(�� 300 ��������): " << endl;
    cin.getline(arr, maxSize); // ���������� ������ getline ��� ���������� ��������(������ �������) � ����������. ������� ����� �� ���������� ������ �������� � ������ arr

    cout << "������� ���������: " << endl;
    cin >> symbol;

    int r = strlen(arr); // ��������� ����� ������ ������� (������ ������� ������� ������ �������, ������� ������ ���� � ������, � ��, ������� �� ���������, �� �������

    for (int i = 0; i <= r; i++) {
        k++; // ����� �����
        if (arr[i] == ' ' || arr[i] == '\0') {
            k--;
            if (arr[i - 1] == symbol) {
                for (int g = i - k; arr[g] != '\0' && arr[g] != ' '; g++) {
                    cout << arr[g];
                }
                cout << ' ';
            }
            k = 0;
        }
    }

    return 0;
}
