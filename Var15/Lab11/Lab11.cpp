// ����� ������������ ���� �������� �������� ��������� ������������ ����� k.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, res = 1;
	cout << "������� ����������� �����: ";
	cin >> n;

	for (int n_temp = n, razr = 1; n_temp != 0; n_temp /= 10, razr++)
	{
		if (razr % 2 != 0)
		{
			res *= n_temp % 10;
		}
	}

	cout << endl;
	cout << "������������ ���� �������� �������� ������������ �����  \"" << n << "\": " << res << endl;
	system("pause");
	return 0;
}