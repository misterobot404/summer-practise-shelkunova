// Найти сумму и количество цифр заданного натурального числа
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, sum = 0, quantity = 0;
	cout << "Введите натуральное число: ";
	cin >> n;
	
	// Количество цифр в числе
	for (int n_temp = n; n_temp != 0; n_temp /= 10)
	{
		quantity++;
		sum += n_temp % 10;
	}

	cout << endl;
	cout << "Сумма цифр натурального числа \"" << n << "\": " << sum << endl;
	cout << "Количество цифр натурального числа \"" << n << "\": " << quantity << endl;
	system("pause");
	return 0;
}