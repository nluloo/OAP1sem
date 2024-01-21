#include <iostream> 

using namespace std;

// 11 вариант
void main()
{
	setlocale(LC_CTYPE, "Russian");
	// Объявление переменной типа int и массива char
	int A;
	char tmp[33];
	// Ввод числа
	cout << "Введите число ";
	cin >> A;
	// Выведем число в двоичном виде
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 15) == 0) // Условие кратности для числа A с дальнейшим выводом на экран
		cout << "Число кратно 16" << endl;
	else
		cout << "Число не кратно 16" << endl;
}
