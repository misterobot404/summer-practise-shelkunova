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
			(y >= 0 && x >= 0 && ((x - r) * (x - r) + y * y <= r * r))
			||
			((x <= 0 && y <= 0) && pow(x - (-r), 2) + pow(y - (-r), 2) >= r * r)
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
