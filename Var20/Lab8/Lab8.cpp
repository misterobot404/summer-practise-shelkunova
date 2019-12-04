#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y, r;
	cout << "Введите значение радиуса окружности: ";
	cin >> r;

	while (true)
	{
		cout << "Координаты точки" << endl;
		cout << "Введите x: ";
		cin >> x;
		cout << "Введите y: ";
		cin >> y;

		if (
			((x * x + y * y > r* r) && y >= 0 && y <= 2 * r && x >= 0 && x <= 2 * r)
			||
			((y >= -x - 2*r) && y <= 0 && x <= 0)
			)
		{
			cout << "Точка попадает в область" << endl;
		}
		else
		{
			cout << "Точка не попадает в область" << endl;
		}
	}
	return 0;
}
