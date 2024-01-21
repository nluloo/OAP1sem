#include <iostream>
#include <string>

using namespace std;
// 4 доп
int main() {
    setlocale(LC_ALL, "ru");
    const int maxSize = 300;
    char arr[maxSize];

    cout << "Введите предложение: " << endl;
    cin.getline(arr,maxSize); // Вводим предложение и сразу записываем его в массив 

    int k = 0;
    int r = strlen(arr); // Узнаем длину нашего массива с символами

    for (int i = 0; i <= r; i++) { 
        if (arr[i] == ' ' || arr[i] == '\0') {
            k++; // Добавляем k для более удобного отслеживания четных элементов массива
            if (k % 2 == 0) { // Если число кратно 2, то выводить его символы в другом порядке
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