#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x,y,r,height,width;
	cout << "������� �������� ������� ����������: ";
	cin >> r;
	cout << "������� ������ ��������������� �������������� (�� ����� " << r*2 <<"): ";
	cin >> height;
	cout << "������� ������ ��������������� �������������� (�� ����� " << r * 2 << "): ";
	cin >> width;

	while (true)
	{
		cout << "���������� �����" << endl;
		cout << "������� x: ";
		cin >> x;
		cout << "������� y: ";
		cin >> y;

		if ((y <= sqrt(r - x * x) && y <= 0 && x <= 0 && y >= -(height / 2)) ||
			(y >= 0 && x >= 0 && y <= height / 2 && x <= width / 2 && (x * x + y * y > r* r)))
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
