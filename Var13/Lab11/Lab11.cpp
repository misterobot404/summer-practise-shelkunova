// ��� ��������� ������������ ����� k ���������� ���������� ���� ������� ����.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, count = 0;
	cout << "������� ����������� �����: ";
	cin >> n;

	for (int n_temp = n; n_temp != 0; n_temp /= 10)
	{
		if (n_temp % 10 % 3 == 0)
		{
			count++;
		}
	}

	cout << endl;
	cout << "���������� ���� ������� ���� ��� ������������ ����� \"" << n << "\": " << count << endl;
	system("pause");
	return 0;
}