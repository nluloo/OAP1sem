#include <iostream>
#include <string>

using namespace std;
// 4 ���
int main() {
    setlocale(LC_ALL, "ru");
    const int maxSize = 300;
    char arr[maxSize];

    cout << "������� �����������: " << endl;
    cin.getline(arr,maxSize); // ������ ����������� � ����� ���������� ��� � ������ 

    int k = 0;
    int r = strlen(arr); // ������ ����� ������ ������� � ���������

    for (int i = 0; i <= r; i++) { 
        if (arr[i] == ' ' || arr[i] == '\0') {
            k++; // ��������� k ��� ����� �������� ������������ ������ ��������� �������
            if (k % 2 == 0) { // ���� ����� ������ 2, �� �������� ��� ������� � ������ �������
                for (int g = i - 1; arr[g] != '\0' && arr[g] != ' '; g--) {
                    cout << arr[g];
                }
                cout << ' ';
            }
        }
    }
    cout << '\n';

    return 0;
}