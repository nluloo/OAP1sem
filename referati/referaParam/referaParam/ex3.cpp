#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;

void link(double& y, double& u) {
    pow(y, u);

}

int main() {
    setlocale(LC_ALL, "ru");
    double a = 234.12432, b = 100.01124;

    cout << "Цикл с ссылкой:" << endl;
    auto linkStart = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++)
    {
        link(a, b);
    }
    auto linkEnd = chrono::high_resolution_clock::now();

    chrono::duration<double> linkDuration = linkEnd - linkStart;
    cout << "Время выполнения: " << linkDuration.count() << " секунд." << endl;

    return 0;
}
