// main.cpp 
// Степанчук Сергій
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 20
#include <iostream>

using namespace std;

int main() {
	double x, a, b, c; // input
	double F; // result

	cout << "x = ?" << endl;
	cin >> x;
	cout << "a = ?" << endl;
	cin >> a;
	cout << "b = ?" << endl;
	cin >> b;
	cout << "c = ?" << endl;
	cin >> c;


	if (b != 0 && x < 0)
		F = - (2 * x - c) / (c * x - a);
	if (b == 0 && x > 0)
		F = (x - a) / (x - c);
	if (!(b != 0 && x < 0) &&
		!(b == 0 && x > 0))
		F = -(x / c) + (-c) / (2 * x);

	cout << "1. " << F << endl;

	// second method

	if (b != 0 && x < 0)
		F = -(2 * x - c) / (c * x - a);
	else if (b == 0 && x > 0)
		F = (x - a) / (x - c);
	else
		F = -(x / c) + (-c) / (2 * x);

	cout << "2. " << F << endl;

	return 0;
}