#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cout << "input m: ";
    cin >> m;

    const int n = 3;
    int arr[n][n];


    if (m >= 1 && m <= n) { // Если m входит в диапазон размерности массива, то продолжать выполнения действий

        cout << "input array: " << endl;
        for (int i = 0; i < n; i++) { // Вводим элементы массива
            for (int g = 0; g < n; g++) {
                cin >> arr[i][g];
            }
        }

        cout << '\n';

        for (int i = 0; i < n; i++) { // Меняем строку и столбец местами меняя индексы
            int temp = arr[i][m - 1];
            arr[i][m - 1] = arr[m - 1][i];
            arr[m - 1][i] = temp;
        }
    cout << "changed array: " << endl;
        for (int i = 0; i < n; i++) { // Выводим измененный массив
            for (int g = 0; g < n; g++) {
                cout << arr[i][g] << ' ';
            }
            cout << '\n';
        }
    }
    else { // Ошибка, если m не входит в диапазон длины массива
        cout << "ERROR" << endl;
    }

    return 0;
}
