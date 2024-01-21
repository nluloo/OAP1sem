#include <iostream>

using namespace std;
// 11 вариант
void main() {
	setlocale(LC_ALL, "rus");
	// Объявление переменных типа int, объявление массива типа char
	char tmp[33];
	int n, m, p, q;
	unsigned int A, B;

	//Ввод переменных
	cout << "Введите число A = ";
	cin >> A;
	cout << "Введите число B = ";
	cin >> B;
	cout << "Введите число битов, которые превращаются в 0 в числе А: ";
	cin >> n;
	cout << "Позиция, где будут данные нули: ";
	cin >> p;
	cout << "Введите число битов, которые хотите взять из числа B: ";
	cin >> m;
	cout << "Позиция, с которой вы хотите их взять: ";
	cin >> q;

	// Инициализирование и создание маски для числа А с помощью массивов
	int maskA = 1;
	maskA = ~maskA;
	for (int i = 1; i < n; i++)
	{
		maskA = maskA << 1;
	}
	for (int i = 1; i < p; i++) {
		maskA = maskA << 1;
		maskA++;
	}
	// Инициализирование и создание маски для числа B с помощью массивов
	int maskB = 1;
	maskB = ~maskB;
	for (int i = 1; i < m; i++)
	{
		maskB = maskB << 1;
	}
	for (int i = 1; i < q; i++) {
		maskB = maskB << 1;
		maskB++;
	}
	maskB = ~maskB;
	// Вывод на экран числа A и числа B в двоичном виде на экран
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA & A, tmp, 2);
	cout << "clear A: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B: " << tmp << endl;
	// Вывод результата дейтсвий, сказанный по условию
	_itoa_s(((A & maskA) | ((B & maskB) >> (q - 1)) << p - 1), tmp, 2);
	cout << "rezult = " << tmp << endl;
}