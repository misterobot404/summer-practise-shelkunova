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

		if (x < -10 || x > 8)
		{
			cout << "Для x = " << x << " функция не определенна" << endl;
		}
		else
		{
			if (x <= -6) y = (-x - 6)/2;
			else if (x <= 0) y = -(x/2+3);
			else if (x <= 3) y = (sqrt(r * r - pow(x, 2)))*(-1);
			else if (x <= 6) y = sqrt(r * r - pow(x - 6, 2)) ;
			else y = 0;
			cout << "Для x = " << x << " значение функции y = " << y << endl;
		}

		cout << endl;
	}

	return 0;
}
