#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int hourUser, minUser, secUser, newHour, newMin, newSec;

    cout << "Введите начальное время (часы, минуты, секунды), через пробел: ";
    cin >> hourUser >> minUser >> secUser;

    cout << "Введите продолжительность таймера (часы, минуты, секунды), через пробел: ";
    cin >> newHour >> newMin >> newSec;

    int totalTimeInSeconds = (newHour * 3600 + newMin * 60 + newSec) % (24 * 3600); // Считаем наш таймер для секунд, чтобы пользователь мог вводить понятные ему значения времени( час, минута)

    if (hourUser < 24 && minUser < 60 && secUser < 60) { // Условие для проверки того, правильно ли пользователь ввел время или нет
        while (totalTimeInSeconds > 0) {


            if (secUser >= 60) { // Если секунды достигнут отметку 60 или выше, то им присвоиться значение 0, а к часам прибавим 1
                secUser = 0;
                minUser++;
            }

            if (minUser >= 60) { // Тоже самое делаем с минутами, только здесь уже прибавляем к часам
                minUser = 0;
                hourUser++;
            }

            if (hourUser >= 24) { // Обнуляем часы, когда они дошли до 24
                hourUser = 0;
            }

            cout << hourUser << ":" << minUser << ":" << secUser << endl; // Выводим наше время

            Sleep(1000); // Чтобы оно менялось ровно 1 секунду нужно добавить функцию sleep и в нее написать значение в милисекундах
            system("cls"); // Чтобы у нас новое время не начиналось с новой строчки, мы будем очищать консоль

            secUser++; // Меняющееся время
            totalTimeInSeconds--; // Когда данная переменна достигнет нуля, то цикл прекратится, что означает, что наш таймер закончил свою работу
        }
        cout << hourUser << ":" << minUser << ":" << secUser << endl;
        cout << "Таймер завершен!" << endl;

    }
    else {
        cout << "Введен неправильный формат времени." << endl; // Вывод об ошибке, если пользователь ввел неправильное время
    }


    return 0;
}
