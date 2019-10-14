// Для заданного натурального числа k определить количество цифр кратных трем.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, count = 0;
	cout << "Введите натуральное число: ";
	cin >> n;

	for (int n_temp = n; n_temp != 0; n_temp /= 10)
	{
		if (n_temp % 10 % 3 == 0)
		{
			count++;
		}
	}

	cout << endl;
	cout << "Количество цифр кратных трем для натурального числа \"" << n << "\": " << count << endl;
	system("pause");
	return 0;
}