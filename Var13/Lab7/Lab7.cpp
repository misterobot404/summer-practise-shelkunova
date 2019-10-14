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

		if (x < -9 || x > 9)
		{
			cout << "��� x = " << x << " ������� �� �����������" << endl;
		}
		else
		{
			if (x <= -6) y = -sqrt(r * r - pow(x + 6, 2));
			else if (x <= -3) y = x + 3;
			else if (x <= 0) y = sqrt(r * r - pow(x, 2));
			else if (x <= 3) y = -x + 3;
			else y = (x - 3) / 2;
			cout << "��� x = " << x << " �������� ������� y = " << y << endl;
		}

		cout << endl;
	}

	return 0;
}
