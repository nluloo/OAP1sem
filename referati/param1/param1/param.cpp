#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;

// ��������� �� ��������
double value(double a, double b) {
    return pow(a, b);
}

// ��������� �� ���������
double pointer(const double* a, const double* b) {
    return pow(*a, *b);
}

// ��������� �� ������
double reference(const double& a, const double& b) {
    return pow(a, b);
}

int main() {
    setlocale(LC_ALL, "ru");

    double value1 = 19400.23;
    double value2 = 102350.525;

    auto start_value = chrono::high_resolution_clock::now();// ��������� ����� ������ ���������� ��������
    double result_value = value(value1, value2); // �������� ������� ��� ���������� ��������
    auto end_value = chrono::high_resolution_clock::now();// ��������� ����� ��������� ���������� ��������

    // chrono::high_resolution_clock::now() ����� ������� ��� ���� (�� ��������, ������� �� ����� ��������� �� �������� ����������, � ����� ���)

    chrono::duration<double, nano> difference_value = end_value - start_value; // ��������� ������� ����� ������� ��������� � �������� ��������� �������
    // ��� � ���������� ���� �������� ���������� �������

    cout << "�������� �� ��������: " << difference_value.count() << " ����������." << endl; // ����� �� ������� �� ����� �������� ����� ���������� ��������� ����� .count()

    // ����������� �������� �� �������� � ���������� � �������

    auto start_pointer = chrono::high_resolution_clock::now();
    double result_pointer = pointer(&value1, &value2);
    auto end_pointer = chrono::high_resolution_clock::now();

    chrono::duration<double, nano> difference_pointer = end_pointer - start_pointer;

    cout << "�������� �� ���������: " << difference_pointer.count() << " ����������." << endl;


    auto start_reference = chrono::high_resolution_clock::now();
    double result_reference = reference(value1, value2);
    auto end_reference = chrono::high_resolution_clock::now();

    chrono::duration<double, nano> difference_reference = end_reference - start_reference;

    cout << "�������� �� ������: " << difference_reference.count() << " ����������." << endl;

    return 0;
}
