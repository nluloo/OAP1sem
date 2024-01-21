#include <stdio.h>	
#include <stdlib.h>
#include <ctime>
#include <iostream>
// Вариант 14
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* arr;
	int n, col = 0;

	cout << "Введите размер массива: ";
	cin >> n;

	if (!(arr = (int*)malloc(n * sizeof(int)))) // Объявляем наш массив через функцию malloc() и проверяем, есть ли место в памяти для него, или нет.  
	{
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++) // Записываем в массив рандомные числа
	{
		arr[i] = rand() % 41 - 10; 
	}

	int max = arr[0];

	for (int i = 0; i < n; i++) { // Находим максимальный элемент и считаем, сколько раз он повторяется
		if (arr[i] >= max) {
			if (arr[i] = max) {
				col++;
			}
			max = arr[i];
		}
	}


	// Выведем массив для удобства проверки задания
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	std::cout << '\n' << "Максимальный элемент массива повторяется : " << col << " раз" << endl;

	free(arr);
}
