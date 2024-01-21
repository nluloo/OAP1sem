#include <stdio.h>	
#include <stdlib.h>
#include <ctime>
#include <iostream>
// Вариант 10
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* arr;
	int n, idMax = 0, idMin = 0, sum = 0, multi = 1;

	cout << "Введите размер массива: ";
	cin >> n;

	if (!(arr = (int*)malloc(n * sizeof(int)))) // Объявляем наш массив через функцию malloc() и проверяем, есть ли место в памяти для него, или нет.  
	{
		cout << "Not enough memory" << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = static_cast<float>(rand()) / RAND_MAX * 41 - 20; // Записываем в массив рандомные числа
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i]; // Считаем сумму элементов, которые больше 0
		}
	}

	int maxOrMin = arr[0];
	for (int i = 0; i < n; i++) { // Находим индекс максимального элемента в массиве
		if (maxOrMin < arr[i]) {
			maxOrMin = arr[i];
			idMax = i; 
		}
	}

	maxOrMin = arr[0];
	for (int i = 0; i < n; i++) {// Находим индекс минимального элемента в массиве
		if (maxOrMin > arr[i]) {
			maxOrMin = arr[i];
			idMin = i;
		}
	}

	// Чтобы реализовать цикл, нужно понять, где стоят данные элементы относительно друг-друга, если idMin будет стоять левее idMax, то цикл будет одним
	// Если правее, то другой
	if (idMin - idMax < 0) { 
		for (++idMin; idMin < idMax; idMin++) {
			multi *= arr[idMin];
		}
	}
	else
		for (++idMax; idMax < idMin; idMax++) {
			multi *= arr[idMax];
		}

	// Выведем массив для удобства проверки задания
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';


	std::cout << '\n' << "Произведение элементов стоящих между максимальным и минимальным значением: " << multi << '\n' << "Сумма положительных элементов массива: " << sum << endl;

	free(arr);
}
