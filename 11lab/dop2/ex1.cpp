#include <iostream>
using namespace std;
 // 2 вариант
void main(){
	setlocale(LC_ALL, "ru");
	// Объявление и инициализирование переменных типа int, объявление массива типа char
	char tmp[33];
	int A, B, maskA = 31;
	int maskB = (~maskA << 2) + 3;

	// Ввод чисел
	cout << "Первое число А=";
	cin >> A;
	cout << "Второе число В=";
	cin >> B;
	
	// Выведем введенные десятичные числы в двоинчный вид и заменим те биты, которые нужно изменить по условию
	// Далее выводим результат после изменения
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1) << 2), tmp, 2);
	cout << "Результат B=" << tmp << endl;
}
