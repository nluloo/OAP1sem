#include <iostream>

using namespace std;

int main() {
    char str[] = "12 21 54 234 45 6 123 34 6 4653 6"; // �������������� ������
    int k = 0, j = 0;


    for (int i = 0; str[i] != '\0'; i++) { // ������� ������� ����� ����� � �������
        if (str[i] == ' ') {
            k++;
        }
    }
    k++;

    int* numbers = new int[k];


    for (int i = 0; i < k; i++) { // ���������� ����� � ����� ������ ��� ���� int ��� ���������� �������������� ��������
        *(numbers + i) = 0;
        while (*(str + j) != ' ' && *(str + j) != '\0') {
            *(numbers + i) = *(numbers + i) * 10 + (*(str + j) - '0');
            j++;
        }
        j++;
    }

    for (int i = 0; i < k; i++) { // ������� �� �����, ������� ������� 2
        if(*(numbers + i) % 2 == 0)
        {
            cout << *(numbers + i) << " ";
        }
    }

    delete[] numbers;

    return 0;
}
