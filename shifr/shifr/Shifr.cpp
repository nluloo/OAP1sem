#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string wordCipher; // �����, ������� ��� ����� �����������
    int keyCaesar; // �����, �� ������� ������ ���������� ����� � ��������
    string keyWord;  // ����-�����, ������� ����������� �� ������ ������ ����������
    cin >> wordCipher >> keyCaesar >> keyWord;

    // ���������� ����� ������ 
    for (auto& charCipher : wordCipher) { // � ������ ����� �� ��������� ���������� charCipher, ������� ���������������� ������ �������� � �����

        // ���������� ��� �������� � ������� ��������
        if (charCipher >= 'A' && charCipher <= 'Z') {
            charCipher = ((charCipher - 'A' + keyCaesar) % 26) + 'A';
        }
        // ���������� ��� �������� � ������ ��������
        if (charCipher >= 'a' && charCipher <= 'z') {
            charCipher = ((charCipher - 'a' + keyCaesar) % 26) + 'a';
        }
    }

    // ������ ����������(� ������� �����-�����)
    char keyWordChar; 
    for (int i = 0; i < wordCipher.size(); ++i) { // � ������� ������� size() �������� � int ����� ���� � �����
        // ��������� ������� �����-�����
         keyWordChar = keyWord[i % keyWord.size()]; //���������� ������ ������� �� ������� ��� ����, �����, ���� ����-����� ������, ��� �� �����, ������� ��� ����� �����������, ����-����� ���������� � ������(����������� ������������ �������� �����)

        // ���������� ��� �������� � ������� ��������
        if (wordCipher[i] >= 'A' && wordCipher[i] <= 'Z') {
            wordCipher[i] = ((wordCipher[i] - 'A' + (keyWordChar - 'A')) % 26) + 'A'; // %26 ������������ ��� ����, ����� ����� �� ������ ���� ���������� � ��������� �� A �� Z(����������� ����� � �������� �������� � ������ ��������)
        }// +'A' ��������� ��� ����������� ����������� �������� � ������� ��������

        // ���������� ��� �������� � ������ ��������
        if (wordCipher[i] >= 'a' && wordCipher[i] <= 'z') {
            wordCipher[i] = ((wordCipher[i] - 'a' + (keyWordChar - 'a'))%26) + 'a';
        }
    }
    // ������� ������������� �������
    cout << wordCipher << endl;

    return 0;
}
