#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float n;
	cout << "������� n: ";
	cin >> n;
	long long result = 0, tempRes = 1, temp;

	for (int i = 1; i < n; i++, tempRes=1)
	{
		
		// ���������� ������� ���������� ����� ����
		for (int fact_temp = 1; fact_temp <= i; fact_temp++)
			tempRes *= fact_temp;

		// ���������� ���������� ����� ����
		tempRes = pow(2, tempRes);

		// ����������� ���������� ����� ���� � �������� �����
		result += tempRes;

		cout << "�������� " << i << " ����� ����: " << tempRes << endl;
	}
	cout << endl << "����� ����: " << result << endl;

	system("pause");
	return 0;
}