/*
������������� �������� ������������������ ����� c ����� �������� �� ���
���� ����� ������ ��������� �������� a
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float arr[] = { 1, 5.2, -3, 13, -12.1,8,-5,16,48 };
	int arr_current_size = sizeof(arr) / sizeof(*arr);

	// ���������� ��������� �������
	cout << "��������� ������: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "������� ��������: ";
	int value;
	cin >> value;

	// �������� ��������� �� ��������� �������
	for (int i = 0; i < arr_current_size;)
	{
		if (arr[i] > value)
		{
			for (int j = i; j < arr_current_size - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr_current_size--;
		}
		else  i++;
	}

	cout << "�������������� ������ (����� ������ " << value << " ���� �������): ";
	// ���������� ������� �������
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}