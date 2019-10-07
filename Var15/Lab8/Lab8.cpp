#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x,y,r,height,width;
	cout << "Введите значение радиуса окружности: ";
	cin >> r;
	cout << "Введите высоту ограничивающего прямоугольника (не более " << r*2 <<"): ";
	cin >> height;
	cout << "Введите ширину ограничивающего прямоугольника (не менее " << r * 2 << "): ";
	cin >> width;

	while (true)
	{
		cout << "Координаты точки" << endl;
		cout << "Введите x: ";
		cin >> x;
		cout << "Введите y: ";
		cin >> y;

		if ((y <= sqrt(r - x * x) && y <= 0 && x <= 0 && y >= -(height / 2)) ||
			(y >= 0 && x >= 0 && y <= height / 2 && x <= width / 2 && (x * x + y * y > r* r)))
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
