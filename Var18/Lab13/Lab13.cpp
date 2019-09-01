/*
��������� �������� ���������� ������ b, ������� �������� ������� a �� ������� �������������� ��������
*/

#include <iostream>
using namespace std;

const int arr_max_size = 128;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr_current_size = 5;
	float arr[arr_max_size] = { 1, 5.2, -3, 13, -12.1 };

	// ���������� ��������� �������
	cout << "��������� ������: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	float el;
	cout << "������� ������� ��� ������� � �������� ������ ����� ������� �������������� ��������: ";
	cin >> el;

	// ������� �������� � �������� ������
	for (int i = 0; i < arr_current_size; i++)
	{
		if (arr[i] > 0)
		{
			// ����������� �� ������� ������ �� ���� �������
			for (int j = arr_current_size; j > i; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[i + 1] = el;
			arr_current_size++;
			i++;
		}
	}

	cout << "�������������� ������: ";
	// ���������� ������� �������
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}