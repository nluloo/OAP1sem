#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;

bool CompareByPointer(const double* a, const double* b) {
	return pow(*a, *b) > 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	double value1 = 19400.23432;
	double value2 = 102350.525124;

	// ��������� �� ���������
	auto start_pointer = chrono::high_resolution_clock::now();
	bool result_pointer = CompareByPointer(&value1, &value2);
	auto end_pointer = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_pointer = end_pointer - start_pointer;
	cout << "CompareByPointer: " << duration_pointer.count() << " ������. ���������: " << result_pointer << endl;
	
	return 0;
}