// ���������� ����� ���� �������� �������� ��������� ������������ ����� m.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n,res = 0;
	cout << "������� ����������� �����: ";
	cin >> n;

	//  true - ������ ���������� ��������, false - �������� ���������� (0 ��� ������ �����)
	bool evenNumber = true;
	// ���������� ��������
	for (int n_temp = n; n_temp != 0; n_temp /= 10)	evenNumber = !evenNumber;


	// ������� ����� ���� �������� ��������
	// ���� ����� ������ �������� ������� � 1 ������� � �����, ���� �������� �� 0 ������� � �����
	for (int n_temp = n, razr = evenNumber; n_temp != 0; n_temp /= 10, razr++)
	{
		if (razr % 2 == 0)
		{
			res += n_temp % 10;
		}
	}

	cout << endl;
	cout << "C���� ���� �������� �������� ��������� ������������ �����  \"" << n << "\": " << res << endl;
	system("pause");
	return 0;
}