#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "������� ����������� ����� n: ";
	cin >> n;

	int x;
	cout << "������� �������������� ����� a: ";
	cin >> x;

	double res = 0, temp_rez, ch = 1, zn = 1;

	for (int i = 0; i <= n; i++)
	{
		// ���������� ��������� ���������� ����� ����
		ch *= (pow(-1,i));
		// ���������� ����������� ���������� ����� ����
		zn *= pow(x, 2 * i);
		// ���������� ���������� ����� ����
		temp_rez = ch / zn;
		res += temp_rez;

		cout << "�������� " << i << " ����� ����: " << temp_rez << endl;	
	}
	cout << endl << "����� ����: " << res << endl;

	system("pause");
	return 0;
}