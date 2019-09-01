#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x,y,r;
	cout << "Введите значение радиуса окружности: ";
	cin >> r;
	cout << "Координаты точки" << endl;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	if ((y <= sqrt(r - x*x) && y <= 0 && x >= 0) ||
		(pow(x-(-r),2) + pow(y-r,2) >= r*r && x <= 0 && x >=-r && y>= 0 && y <= r))
	{
		cout << "Точка попадает в область" << endl;
	}
	else
	{
		cout << "Точка не попадает в область" << endl;
	}

	system("pause");
	return 0;
}
