#include <iostream>
#include <string>

using namespace std;
// 1 доп
int main() {
    setlocale(LC_ALL, "ru");
    const int maxSize = 300;
    int k = 0;
    char arr[maxSize];
    char symbol;

    cout << "Введите последовательность слов через пробел(до 300 символов): " << endl;
    cin.getline(arr, maxSize); // Используем функци getline для считывания символов(считая пробелы) с клавиатуры. Функцию сразу же записывает данные значения в массив arr

    cout << "Введите окончание: " << endl;
    cin >> symbol;

    int r = strlen(arr); // Вычисляем длину нашего массива (данная функция считает только символы, которые заняты нами в памяти, а те, которые не введенные, не считает

    for (int i = 0; i <= r; i++) {
        k++; // Длина слова
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
