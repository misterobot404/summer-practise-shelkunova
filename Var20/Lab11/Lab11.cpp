// Для заданного натурального числа n определить сумму цифр кратных трем.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, res = 0;
	cout << "Введите натуральное число: ";
	cin >> n;

	for (int n_temp = n; n_temp != 0; n_temp /= 10)
	{
		if (n_temp % 10 % 3 == 0) res += n_temp % 10;
	}

	cout << endl;
	cout << "Сумма цифр кратных трем для натурального числа \"" << n << "\": " << res << endl;
	system("pause");
	return 0;
}