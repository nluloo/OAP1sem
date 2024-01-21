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
	float* arr;
	int n, idMax, C, col = 0;
	float max = 0, perem = 1;

	cout << "Введите размер массива: ";
	cin >> n;
	cout << "Введите число, которое будет разграничивать массив: ";
	cin >> C;

	if (!(arr = (float*)malloc(n * sizeof(int)))) // Объявляем наш массив через функцию malloc() и проверяем, есть ли место в памяти для него, или нет.  
	{	                                      
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = static_cast<float>(rand()) / RAND_MAX * 20; // В наш массив записываем рандомные числа от 0 до 20. Числа будут типа float
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > C) {
			col++; // Считаем количество элементов, которые будут больше числа, введенного с клавиатуры
		}
	}

	for (int i = 0; i < n; i++) {
		if (max < abs(arr[i])) {
			max = abs(arr[i]);
			idMax = i; // Находим индекс максимального элемента по модулю
		}
	}

	// Выведем массив для удобства проверки задания
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	for (idMax = idMax + 1; idMax < n; idMax++) { // Вычисляем произведение чисел после максимального значения
		perem *= arr[idMax];
	}

	std::cout << '\n' << "Максимальный элемент массива: " << max << '\n' << "Произведение чисел после максимального элеменнта: " << perem << '\n' << "Количество чисел, больше введенного числа: " << col << endl;

	free(arr);
}
