// ����� ����� � ���������� ���� ��������� ������������ �����
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, sum = 0, quantity = 0;
	cout << "������� ����������� �����: ";
	cin >> n;
	
	// ���������� ���� � �����
	for (int n_temp = n; n_temp != 0; n_temp /= 10)
	{
		quantity++;
		sum += n_temp % 10;
	}

	cout << endl;
	cout << "����� ���� ������������ ����� \"" << n << "\": " << sum << endl;
	cout << "���������� ���� ������������ ����� \"" << n << "\": " << quantity << endl;
	system("pause");
	return 0;
}