#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, y, r;
	cout << "������� �������� ������� ����������: ";
	cin >> r;

	while (true)
	{
		cout << "���������� �����" << endl;
		cout << "������� x: ";
		cin >> x;
		cout << "������� y: ";
		cin >> y;

		if (
			((x * x + y * y > r* r) && y >= 0 && y <= 2 * r && x >= 0 && x <= 2 * r)
			||
			((y >= -x - 2*r) && y <= 0 && x <= 0)
			)
		{
			cout << "����� �������� � �������" << endl;
		}
		else
		{
			cout << "����� �� �������� � �������" << endl;
		}
	}
	return 0;
}
