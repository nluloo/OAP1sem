#include <iostream>

using namespace std;
// 2 вариант
void main() {
	setlocale(LC_ALL, "ru");
	// Объявляем переменные типа int и массив типа char
	char tmp[33];
	int n, p;
	unsigned int A, B;

	// Ввод чисел
	cout << "Введите число A = ";
	cin >> A;
	cout << "Введите сколько битов хотите изменить: ";
	cin >> n;
	cout << "Введите позицию битов, которые хотите изменить: ";
	cin >> p;
	// Создаем маску для числа А 
	int maskA = 1;
	maskA = ~maskA;
	// Здесь я уверен, что можно и без инверсии разобраться, но данный способ мне более понятен, поэтому я инвертировал maskA и считал с помощью циклов
	for (int i = 1; i < n; i++)
	{
		maskA = maskA << 1;
	}
	for (int i = 1; i < p; i++) {
		maskA = maskA << 1;
		maskA++;
	}
	// Данный цикл предназначен для того, чтобы взять числа не левее данной позиции, а правее
	for (int i = 0; i < n; i++)
	{
		maskA = maskA >> 1;
	}
	maskA = ~maskA; // После всех действий инвертируем обратно

	// Выведем А в двоичном виде и маску для А, чтобы понять, что меняется
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;
	// И в конце выводим результат измененных битов
	_itoa_s(A | maskA, tmp, 2);
	cout << "Change A: " << tmp << endl;
}