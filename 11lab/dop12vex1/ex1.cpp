#include <iostream>

using namespace std;
// 12 вариант
void main() {
	setlocale(LC_CTYPE, "Russian");
	// Объявляем переменну типа int и массив char
	char tmp[33];
	unsigned int A;

	//Ввод числа с клавиатуры
	cout << "Введите число А = ";
	cin >> A;

	int maskA = 31 << 3; // Создание маски для инвертирования всех битов начиная с 4 заканчивая 8 включительно
	// Выводим на экран маску для А, само А и резуьтат выислений
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;
	_itoa_s((A ^ maskA), tmp, 2); // Здесь происходит инвертирование битов с 4 по 8
	cout << "rezult A: " << tmp << endl;
}