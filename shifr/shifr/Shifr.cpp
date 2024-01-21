#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string wordCipher; // Слово, которое нам нужно зашифровать
    int keyCaesar; // Число, на сколько должна сдвинуться буква в алфавите
    string keyWord;  // Ключ-слово, которое применяется во втором методе шифрования
    cin >> wordCipher >> keyCaesar >> keyWord;

    // Применение шифра Цезаря 
    for (auto& charCipher : wordCipher) { // В данном цикле мы объявляем переменную charCipher, которая инициализируется каждым символом в слове

        // Шифрование для символов в верхнем регистре
        if (charCipher >= 'A' && charCipher <= 'Z') {
            charCipher = ((charCipher - 'A' + keyCaesar) % 26) + 'A';
        }
        // Шифрование для символов в нижнем регистре
        if (charCipher >= 'a' && charCipher <= 'z') {
            charCipher = ((charCipher - 'a' + keyCaesar) % 26) + 'a';
        }
    }

    // Второе шифрование(с помощью ключа-слова)
    char keyWordChar; 
    for (int i = 0; i < wordCipher.size(); ++i) { // С помощью функции size() получаем в int число букв в слове
        // Получение символа ключа-слова
         keyWordChar = keyWord[i % keyWord.size()]; //Используем взятие остатка от деления для того, чтобы, если ключ-слово меньше, чем то слово, которое нам нужно зашифровать, ключ-слово начиналось с начала(происходила своеобразная итерация слова)

        // Шифрование для символов в верхнем регистре
        if (wordCipher[i] >= 'A' && wordCipher[i] <= 'Z') {
            wordCipher[i] = ((wordCipher[i] - 'A' + (keyWordChar - 'A')) % 26) + 'A'; // %26 используется для того, чтобы буквы по своему коду оставались в диапазоне от A до Z(циклический сдвиг в пределах алфавита с учетом регистра)
        }// +'A' добавляем для корректного отображения символов в верхнем регистре

        // Шифрование для символов в нижнем регистре
        if (wordCipher[i] >= 'a' && wordCipher[i] <= 'z') {
            wordCipher[i] = ((wordCipher[i] - 'a' + (keyWordChar - 'a'))%26) + 'a';
        }
    }
    // Выводим зашифрованную строчку
    cout << wordCipher << endl;

    return 0;
}
