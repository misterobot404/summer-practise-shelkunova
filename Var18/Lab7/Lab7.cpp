#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, r1, r2, y;
	cout << "������� �������� ���������: ";
	cin >> x;
	cout << "������� �������� ������ r1: ";
	cin >> r1;
	cout << "������� �������� ������ r2: ";
	cin >> r2;
	cout << endl;

	if (x < -3 || x > 7)
	{
		cout << "��� x = " << x << " ������� �� �����������" << endl;
	}
	else
	{
		if (x <= -2) y = -x - 2;
		else if (x <= 0) y = sqrt(r1 - pow(x + 1, 2));
		else if (x <= 4) y = sqrt(r2*2 - pow(x - 2, 2));
		else if (x <= 6) y = -x / 2 + 2;
		else y = -1;
		cout << "��� x = " << x << " �������� ������� y = " << y << endl;
	}

	system("pause");
	return 0;
}
