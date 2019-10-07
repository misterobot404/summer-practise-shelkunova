#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, r, y;

	while (true)
	{
		cout << "Введите значение аргумента: ";
		cin >> x;
		cout << "Введите значение радиуса r: ";
		cin >> r;

		if (x < -3 || x > 7)
		{
			cout << "Для x = " << x << " функция не определенна" << endl;
		}
		else
		{
			if (x <= -1) y = -x - 1;
			else if (x <= 1) y = 0;
			else if (x <= 5) y = sqrt(r*r - (x-3) * (x - 3));
			else y = -x / 2 + 2.5;
			cout << "Для x = " << x << " значение функции y = " << y << endl;
		}

		cout << endl;
	}

	return 0;
}
