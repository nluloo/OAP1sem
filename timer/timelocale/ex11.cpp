#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int hour, min, sec;

    cout << "Введите часы, минуты и секунды (через пробел) для таймера: ";
    cin >> hour >> min >> sec;

    int totalSeconds = hour * 3600 + min * 60 + sec; // Вычисляем сколько секунд в наших введенных зрначениях
   
    if(min < 60 && sec < 60) // Если пользователь введет число в минуты и секунды больше, чем 60, то программа не запустится
    {
        while (totalSeconds != false) { // Пока таймер не обнулился, продолжаем выполнять цикл

            // Здесь мы делим на данные значения для того, чтобы, когда был переход с 00 в 59 (по секундам) минуты и часы тоже меняли свое значение
            hour = (totalSeconds % 216000) / 3600;
            min = (totalSeconds % 3600) / 60;
            sec = totalSeconds % 60;

            cout << "Осталось времени: " << hour << " часов " << min << " минут " << sec << " секунд" << endl;

            totalSeconds--; // Счетчик секунд

            Sleep(1000); // Задержка в выводе 1 секунда
            system("cls"); // Очищаем консоль
        }
        cout << "Таймер завершен!" << endl;
    }
    else {
        cout << "Введены неверные значения." << endl;
    }

    return 0;
}
