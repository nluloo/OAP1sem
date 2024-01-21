#include <iostream>
#include <vector>

using namespace std;

int main() {
    char arr[] = "Hello he he she it he he hi Hello";
    int k = 0;

    // ѕодсчет количества слов в предложении
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ' ') {
            k++;
        }
    }
    k++;

    // —оздаем массив дл€ хранени€ слов
    string* words = new string[k];

    // «аписываем в этот массив наши слова
    int j = 0;
    for (int i = 0; i < k; i++) {
        while (arr[j] != ' ' && arr[j] != '\0') {
            words[i] = words[i] + arr[j];
            j++;
        }
        j++;
    }


    for (int i = 0; i < k; i++) {
        bool rep = 0; // ќтслеживание, повтор€етс€ ли слово
        for (int g = 0; g < i; g++) {
            if (words[i] == words[g]) { // ≈сли слова одинаковые, то присвоить нашему индикатору число и выйти из цикла
                rep = 1;
                break;
            }
        }
        if (rep == 0) { // ≈сли слово не повтор€лось, то вывести его
            cout << words[i] << ' ';
        }
    }

    delete[] words;
    return 0;
}
