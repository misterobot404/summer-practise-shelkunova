#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x,y,r;
	cout << "������� �������� ������� ����������: ";
	cin >> r;
	cout << "���������� �����" << endl;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;

	if ((y <= sqrt(r - x*x) && y <= 0 && x >= 0) ||
		(pow(x-(-r),2) + pow(y-r,2) >= r*r && x <= 0 && x >=-r && y>= 0 && y <= r))
	{
		cout << "����� �������� � �������" << endl;
	}
	else
	{
		cout << "����� �� �������� � �������" << endl;
	}

	system("pause");
	return 0;
}
