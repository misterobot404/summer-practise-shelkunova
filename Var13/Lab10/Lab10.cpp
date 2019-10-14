#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите натуральное число n: ";
	cin >> n;

	int x;
	cout << "Введите действительное число x: ";
	cin >> x;

	double res = 0, temp_rez, ch = 1, zn = 1;

	for (int i = 1; i <= n; i++)
	{
		// Вычисление числителя очередного члена ряда
		ch *= (x - pow(2,i));
		// Вычисление знаменателя очередного члена ряда
		zn *= (x - pow(2, i) + 1);
		// Вычисление очередного члена ряда
		temp_rez = ch / zn;
		res += temp_rez;

		cout << "Значение " << i << " члена ряда: " << temp_rez << endl;	
	}
	cout << endl << "Сумма ряда: " << res << endl;

	system("pause");
	return 0;
}