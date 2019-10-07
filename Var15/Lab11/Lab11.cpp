// Найти произведение цифр нечетных разрядов заданного натурального числа k.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, res = 1;
	cout << "Введите натуральное число: ";
	cin >> n;

	for (int n_temp = n, razr = 1; n_temp != 0; n_temp /= 10, razr++)
	{
		if (razr % 2 != 0)
		{
			res *= n_temp % 10;
		}
	}

	cout << endl;
	cout << "Произведение цифр нечетных разрядов натурального числа  \"" << n << "\": " << res << endl;
	system("pause");
	return 0;
}