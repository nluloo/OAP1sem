#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cout << "input m: ";
    cin >> m;

    const int n = 3;
    int arr[n][n];


    if (m >= 1 && m <= n) { // ���� m ������ � �������� ����������� �������, �� ���������� ���������� ��������

        cout << "input array: " << endl;
        for (int i = 0; i < n; i++) { // ������ �������� �������
            for (int g = 0; g < n; g++) {
                cin >> arr[i][g];
            }
        }

        cout << '\n';

        for (int i = 0; i < n; i++) { // ������ ������ � ������� ������� ����� �������
            int temp = arr[i][m - 1];
            arr[i][m - 1] = arr[m - 1][i];
            arr[m - 1][i] = temp;
        }
    cout << "changed array: " << endl;
        for (int i = 0; i < n; i++) { // ������� ���������� ������
            for (int g = 0; g < n; g++) {
                cout << arr[i][g] << ' ';
            }
            cout << '\n';
        }
    }
    else { // ������, ���� m �� ������ � �������� ����� �������
        cout << "ERROR" << endl;
    }

    return 0;
}
