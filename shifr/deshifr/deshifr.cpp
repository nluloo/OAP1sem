#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wordCipher; // �����, ������� ��� ����� ������������
    int keyCaesar; // ����-�����, �� ������� ���� ��� ������� � �������������
    string keyWord;  // ����-�����, ������� ����������� ��� ����������
    cin >> wordCipher >> keyCaesar >> keyWord;

    char keywordChar;
    // ������������ � ������� �����-�����, ������� ����������� � ���������� �����
    // �.� ��������� ��������� � ���������� �� ��������� ����-�����, �� ������ ��������� � ������������ �� ������ �� ������ ������� ��������������� �������� � ������ ����-�����
    for (int i = 0; i < wordCipher.size(); ++i) {
        // ��������� ������� �����-�����
        keywordChar = keyWord[i % keyWord.size()];

        // ������������ ��� �������� � ������� ��������
        // ����� �� �������� �� ������� ���� ������� �������������� ������ ��� ������� �����-�����
        if (wordCipher[i] >= 'A' && wordCipher[i] <= 'Z') {
            wordCipher[i] = ((wordCipher[i] - 'A' - (keywordChar - 'A') + 26) % 26) + 'A';
            // + 26 �� ����������, ����� �����, �� �������� �� ����� ������� �� �������, ���� �������������, ��� ������������ ��� ������������ � �������� ��������, � �� ������ ��������
        }
        // ������������ ��� �������� � ������ ��������
        if (wordCipher[i] >= 'a' && wordCipher[i] <= 'z') {
            wordCipher[i] = ((wordCipher[i] - 'a' - (keywordChar - 'a') + 26) % 26) + 'a';
        }
    }

    // ������������ ����� ������ (����������� ����-�����, � ������� �������� ���� ����������� ����� � �������������)
    // ����� �� �� �������� ����� �� ������� �����, ����� ��������� �� �� ���� ����-�����(��������� � �������� ��������)
    for (auto& charCipher : wordCipher) {
        if (charCipher >= 'A' && charCipher <= 'Z') {
            charCipher = ((charCipher - 'A' - keyCaesar + 26) % 26) + 'A';
        }
        if (charCipher >= 'a' && charCipher <= 'z') {
            charCipher = ((charCipher - 'a' - keyCaesar + 26) % 26) + 'a'; 
        }
    }

    cout << wordCipher << endl;

    return 0;
}
