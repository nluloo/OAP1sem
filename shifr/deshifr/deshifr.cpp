#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wordCipher; // Слово, которое нам нужно расшифровать
    int keyCaesar; // Ключ-число, на сколько шифр был сдвинут в шифровальщике
    string keyWord;  // Ключ-слово, которое применялось для зашифровки
    cin >> wordCipher >> keyCaesar >> keyWord;

    char keywordChar;
    // Дешифрование с помощью ключа-слова, которое применялось в зашифровке слова
    // Т.к последним действием в шифровании мы применяли ключ-слово, то первым действием в дешифровании мы должны мы должны сделать противоположное действие с данным ключ-слово
    for (int i = 0; i < wordCipher.size(); ++i) {
        // Получение символа ключа-слова
        keywordChar = keyWord[i % keyWord.size()];

        // Дешифрование для символов в верхнем регистре
        // Здесь мы отнимаем от каждого кода символа зашифрованного текста код символа ключа-слова
        if (wordCipher[i] >= 'A' && wordCipher[i] <= 'Z') {
            wordCipher[i] = ((wordCipher[i] - 'A' - (keywordChar - 'A') + 26) % 26) + 'A';
            // + 26 мы используем, чтобы число, от которого мы берем остаток от деление, было положительным, что обеспечивает нам дешифрование в пределах алфавита, а не других символов
        }
        // Дешифрование для символов в нижнем регистре
        if (wordCipher[i] >= 'a' && wordCipher[i] <= 'z') {
            wordCipher[i] = ((wordCipher[i] - 'a' - (keywordChar - 'a') + 26) % 26) + 'a';
        }
    }

    // Дешифрование шифра Цезаря (применяется ключ-число, с помощью которого было зашифровано слово в шифровальщике)
    // Здесь же мы сдвигаем буквы на позиции назад, путем отнимания от их кода ключ-число(оставаясь в пределах алфавита)
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
