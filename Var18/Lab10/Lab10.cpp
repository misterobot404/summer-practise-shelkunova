#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float n;
	cout << "������� n: ";
	cin >> n;
	double result = 0, zn = 0;
	int ch = 1;

	for (int k = 1; k <= n; k++, ch = 1, zn = 0)
	{
		// ���������� ��������� ���������� ����� ����
		for (int ch_temp = 1; ch_temp <= k; ch_temp++)
			ch *= ch_temp;
		// ���������� ����������� ���������� ����� ����
		for (int zn_temp = 2; zn_temp <= k+1; zn_temp++)
		{
			zn += 1.0 / zn_temp;
		}
		// ���������� ���������� ����� ����
		result += ch / zn;
		cout << "�������� " << k << " ����� ����: " << ch / zn << endl;
	}
	cout << endl << "����� ����: " << result << endl;

	system("pause");
	return 0;
}