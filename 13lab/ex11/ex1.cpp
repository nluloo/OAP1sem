#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    char str[] = "dfgsdfg sgdgf dgdfg dg dfg";
    int k = 0, j = 0, max = 0;

    for (int i = 0; str[i] != '\0'; i++) { // Создаем цикл для вычисления количества слов в предложении
        // Делаем это для дальнейшей записи данных слов в массив
        if (str[i] == ' ') {
            k++;
        }
    }
    k++;

    vector<string> words(k); 


    
    for (int i = 0; i < k; i++) { // Записываем слова в новый массив
        while (str[j] != ' ' && str[j] != '\0') {
            words[i] = words[i] + str[j];
            j++;
        }
        j++;
    }

    // Создаем новые массивы для дальнейшего сравнения слов
    string shortestWord = words[0];
    string longestWord = words[0];

    for (const auto& word : words) { // В этом цикле мы сравниваем слова по количеству символов
        // Данный цикл будет проходить по всем словам пока не дойдет до последнего
        if (word.length() < shortestWord.length()) {
            shortestWord = word;
        }

        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    cout << "Самое короткое слово: " << shortestWord << endl;
    cout << "Самое длинное слово: " << longestWord << endl;

    return 0;
}