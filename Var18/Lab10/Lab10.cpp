#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float n;
	cout << "Введите n: ";
	cin >> n;
	double result = 0, zn = 0;
	int ch = 1;

	for (int k = 1; k <= n; k++, ch = 1, zn = 0)
	{
		// Вычисление числителя очередного члена ряда
		for (int ch_temp = 1; ch_temp <= k; ch_temp++)
			ch *= ch_temp;
		// Вычисление знаменателя очередного члена ряда
		for (int zn_temp = 2; zn_temp <= k+1; zn_temp++)
		{
			zn += 1.0 / zn_temp;
		}
		// Вычисление очередного члена ряда
		result += ch / zn;
		cout << "Значение " << k << " члена ряда: " << ch / zn << endl;
	}
	cout << endl << "Сумма ряда: " << result << endl;

	system("pause");
	return 0;
}