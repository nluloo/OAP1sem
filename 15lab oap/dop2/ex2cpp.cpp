#include <iostream>
#include <ctime>
// Вариант 2
using namespace std;

void main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int n, m, str = 0, max;
    cout << "Введите количество строк и столбцов матрицы(через пробел): ";
    cin >> n >> m;

    int** arr = new int* [n]; // Сначала объявляем массив для строк

    for (int i = 0; i < n; i++)
        arr[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 101 - 10; // Записываем в матрицу рандомные значения
        }
    }

    int strind, colind;

    cout << "Матрица до изменений: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
    cout << '\n';

    max = arr[0][0]; // Присваиваем переменной max значение 1 элемента матрицы и с помощью ее находим максимальный элемент матрицы в след. цикле

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                strind = i; // В новые переменные записываем индексы элементы(строку и столбец)
                colind = j;
            }
        }
    }
    swap(arr[0][0], arr[strind][colind]); // Меняем местами первый элемент и максимальный элемент матрицы

    cout << "Матрица после изменений: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}