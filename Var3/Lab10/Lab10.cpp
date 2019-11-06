#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите натуральное число n: ";
	cin >> n;

	int x;
	cout << "Введите действительное число a: ";
	cin >> x;

	double res = 0, temp_rez, ch = 1, zn = 1;

	for (int i = 0; i <= n; i++)
	{
		// Вычисление числителя очередного члена ряда
		ch *= (pow(-1,i));
		// Вычисление знаменателя очередного члена ряда
		zn *= pow(x, 2 * i);
		// Вычисление очередного члена ряда
		temp_rez = ch / zn;
		res += temp_rez;

		cout << "Значение " << i << " члена ряда: " << temp_rez << endl;	
	}
	cout << endl << "Сумма ряда: " << res << endl;

	system("pause");
	return 0;
}