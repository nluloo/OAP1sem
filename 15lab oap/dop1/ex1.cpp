#include <iostream>
#include <ctime>
// Вариант 2
using namespace std;

void main(){
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int* A;
	int n, markIndex, mark = 0;

	cout << "Введите длину массива: ";
	cin >> n;

	A = (int*)malloc(n * sizeof(int));

	if (!A) {
		cout << "Not enough memory";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		A[i] = static_cast<float>(rand()) / RAND_MAX * 20 - 10; // Записываем в массив рандомные числа
		if (mark == 0) { // Для того, чтобы больше не входить в след условие, используем данное условие ( mark == 0 )
			if (A[i] < 0) {
				mark++; // Увеличиваем нашу переменную, которая отвечает за то, находится ли в массиве хотябы 1 отрицательный элемент
			}
		}
	}
	
	// В данном цикле находим индекс последнего отрицательного числа в массиве
	for (int i = 0; i < n; i++) {
		if (A[i] < 0) {
			markIndex = i;
		}
	}

	cout << "Массив: " << '\n';
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << ' ';
	}
	cout << '\n';

	if (mark != 0) { // Есть ли в массиве отрицательный элемент
		cout << '\n' << "В данном массиве есть хотябы один отрицательный элемент" << '\n' << "Максимальный по индексу отрицательный элемент: " << markIndex + 1 << endl;
	}
	else
		cout << "В матрице нет отрицательных элементов." << endl;
}