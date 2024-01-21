#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;

// Сравнение по значению
double value(double a, double b) {
    return pow(a, b);
}

// Сравнение по указателю
double pointer(const double* a, const double* b) {
    return pow(*a, *b);
}

// Сравнение по ссылке
double reference(const double& a, const double& b) {
    return pow(a, b);
}

int main() {
    setlocale(LC_ALL, "ru");

    double value1 = 19400.23;
    double value2 = 102350.525;

    auto start_value = chrono::high_resolution_clock::now();// Фиксируем время начала выполнения операции
    double result_value = value(value1, value2); // Вызываем функцию для выполнения операции
    auto end_value = chrono::high_resolution_clock::now();// Фиксируем время окончания выполнения операции

    // chrono::high_resolution_clock::now() нужно ставить два раза (до операции, которое мы хотим проверить на скорость выполнения, и после нее)

    chrono::duration<double, nano> difference_value = end_value - start_value; // Вычисляем разницу между данными начальным и конечным значением времени
    // Это и получается наша скорость выполнение функции

    cout << "Передача по значению: " << difference_value.count() << " наносекунд." << endl; // Здесь мы выводим на экран значение нашей переменной используя метод .count()

    // Аналогичные действия мы проводим с указателем и ссылкой

    auto start_pointer = chrono::high_resolution_clock::now();
    double result_pointer = pointer(&value1, &value2);
    auto end_pointer = chrono::high_resolution_clock::now();

    chrono::duration<double, nano> difference_pointer = end_pointer - start_pointer;

    cout << "Передача по указателю: " << difference_pointer.count() << " наносекунд." << endl;


    auto start_reference = chrono::high_resolution_clock::now();
    double result_reference = reference(value1, value2);
    auto end_reference = chrono::high_resolution_clock::now();

    chrono::duration<double, nano> difference_reference = end_reference - start_reference;

    cout << "Передача по ссылке: " << difference_reference.count() << " наносекунд." << endl;

    return 0;
}
