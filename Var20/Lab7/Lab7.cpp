#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float start, end, radius;
	cout << "������� �������� ������ ���������: ";
	cin >> start;
	cout << "������� �������� ����� ���������: ";
	cin >> end;
	cout << "������� �������� ������� r: ";
	cin >> radius;

	for (float x = start, r = radius, y; x <= end; x+= 0.5)
	{
		if (x < -10 || x > 4)
		{
			cout << "��� x = " << x << " ������� �� �����������" << endl;
		}
		else
		{
			if (x < -6) y = -sqrt(r * r - pow(x + 8, 2)) + r;
			else if (x < -4) y = 2;
			else if (x < 2) y = -x / 2;
			else y = x - 3;
			cout << "��� x = " << x << " �������� ������� y = " << y << endl;
		}
	}

	system("pause");
	return 0;
}
