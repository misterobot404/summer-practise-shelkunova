// Определить сумму цифр нечетных разрядов заданного натурального числа m.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n,res = 0;
	cout << "Введите натуральное число: ";
	cin >> n;

	//  true - чётное количество разрядов, false - нечётное количество (0 это четное число)
	bool evenNumber = true;
	// Определяем чётность
	for (int n_temp = n; n_temp != 0; n_temp /= 10)	evenNumber = !evenNumber;


	// Находим сумму цифр нечётных разрядов
	// Если число чётное начинаем считать с 1 разряда с конца, если нечётное со 0 разряда с конца
	for (int n_temp = n, razr = evenNumber; n_temp != 0; n_temp /= 10, razr++)
	{
		if (razr % 2 == 0)
		{
			res += n_temp % 10;
		}
	}

	cout << endl;
	cout << "Cумма цифр нечетных разрядов заданного натурального числа  \"" << n << "\": " << res << endl;
	system("pause");
	return 0;
}