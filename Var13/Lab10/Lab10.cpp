#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "������� ����������� ����� n: ";
	cin >> n;

	int x;
	cout << "������� �������������� ����� x: ";
	cin >> x;

	double res = 0, temp_rez, ch = 1, zn = 1;

	for (int i = 1; i <= n; i++)
	{
		// ���������� ��������� ���������� ����� ����
		ch *= (x - pow(2,i));
		// ���������� ����������� ���������� ����� ����
		zn *= (x - pow(2, i) + 1);
		// ���������� ���������� ����� ����
		temp_rez = ch / zn;
		res += temp_rez;

		cout << "�������� " << i << " ����� ����: " << temp_rez << endl;	
	}
	cout << endl << "����� ����: " << res << endl;

	system("pause");
	return 0;
}