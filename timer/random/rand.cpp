#include <iostream>
#include <ctime>

using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int randomNumber = rand() % 501; // Ограничиваем значения подбираемых цифр до 500 (диапазон: от 0 до 500)
	int numberUser, x, counter = 0;

	cout << "Введите предполагаемое число (от 0 до 500): ";
	cin >> numberUser;

		while (numberUser != randomNumber) { // Цикл выполняется, пока не найдется совпадащющая цифра

			if (numberUser > 500) { // Условия для того, чтобы пользователь вводил цифры в диапазоне от 0 до 500, если введет больше, то программа закончит свою работу
				cout << "Введено число, выходящее за даипазон. ";
				break;
			}
				if (counter <= 3) // Данное условие создано для того, чтобы позже предложить пользователю подсказку
				{
					// В данных двух условиях проверяется меньше или больше число, ведденое пользователем
					if (numberUser < randomNumber) {
						cout << "Данное число меньше, чем загаданное компьютером. \n" << endl;
					}
					if (numberUser > randomNumber) {
						cout << "Данное число больше, чем загаданное компьютером. \n" << endl;
					}
				}
				counter++;
				

				if (counter >= 3) { // Для перехода к подсказкам используется данный блок условия
					break;
				}

				cout << "Введите предполагаемое число: "; // Размещаем ввод символа здесь, т.к нам нужно проверить число, введенное первый раз, и вывести на экран результат проверки
				cin >> numberUser; 


		}
		if (numberUser == randomNumber) {
			cout << "\n" << "Вы угадали число!" << endl;
		}
		


	// Если за 3 шага пользователь не угадал число ему выводится предложение о подсказке
	if (counter >= 3) {

		cout << "Хотите получить подсказку? ( 1 - да, 2 - нет)" << endl; 
		cin >> x;

		switch (x)
		{
		case 1:
			
			cout << "Загаданное число находится в диапазоне от " << (randomNumber / 100) * 100 << " до " << (randomNumber / 100 + 1) * 100 << endl;

			if (randomNumber % 2 == 0)
				cout << "Загаданное число четное \n" << endl;
			else
				cout << "Загаданное число нечетное \n" << endl;
			
			while (numberUser != randomNumber) {
				if (numberUser > 500) {
					cout << "Введено число, выходящее за даипазон. ";
					break;
				}

				cout << "Введите предполагаемое число: ";
				cin >> numberUser;

				counter++;
				if (numberUser < randomNumber) {
					cout << "Данное число меньше, чем загаданное компьютером. \n" << endl;
				}
				if (numberUser > randomNumber) {
					cout << "Данное число больше, чем загаданное компьютером. \n" << endl;
				}
			}
			if (numberUser == randomNumber) {
				cout << "\n" << "Вы угадали число!" << endl;
			}
			break;
		case 2:
			while (numberUser != randomNumber) {

				if (numberUser > 500) {
					cout << "Введено число, выходящее за даипазон. ";
					break;
				}

				cout << "Введите предполагаемое число: ";
				cin >> numberUser;

				counter++;
				if (numberUser < randomNumber) {
					cout << "Данное число меньше, чем загаданное компьютером. \n" << endl;
				}
				if (numberUser > randomNumber) {
					cout << "Данное число больше, чем загаданное компьютером. \n" << endl;
				}
			}

			if (numberUser == randomNumber) {
				cout << '\n' << "Вы угадали число!" << endl;
			}
			break;
		default:
			cout << "Выбран неверных вариант." << endl;
			break;
		}
	}
	if (numberUser == randomNumber)
	{
		cout << "Число " << randomNumber << " было загадано компьютером." << '\n' << "Вам потребовалось " << counter << " попыток(-ки), чтобы угадать число." << endl;
	}
}