#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, r, y;

	while (true)
	{
		cout << "������� �������� ���������: ";
		cin >> x;
		cout << "������� �������� ������� r: ";
		cin >> r;

		if (x < -3 || x > 7)
		{
			cout << "��� x = " << x << " ������� �� �����������" << endl;
		}
		else
		{
			if (x <= -1) y = -x - 1;
			else if (x <= 1) y = 0;
			else if (x <= 5) y = sqrt(r*r - (x-3) * (x - 3));
			else y = -x / 2 + 2.5;
			cout << "��� x = " << x << " �������� ������� y = " << y << endl;
		}

		cout << endl;
	}

	return 0;
}
