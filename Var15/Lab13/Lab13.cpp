/*
������������� �������� ������������������ ����� c ����� �������� �� ���
���� ������������� ����� � �������� �� k �� m
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float arr[] = { 1, 5.2, -3, 13, -12.1,8,-5,16,48 };
	int arr_current_size = sizeof(arr)/sizeof(*arr);

	// ���������� ��������� �������
	cout << "��������� ������: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "�������� ������������� ����� ��� ��������  (�� 1 �� " << arr_current_size << "):" << endl;
	cout << "������ ���������: " << endl;
	int start;
	cin >> start;
	start--;
	cout << "����� ���������:" << endl;
	int end;
	cin >> end;
	end--;

	// �������� ��������� �� ��������� �������
	for (int i = 0; i < arr_current_size;)
	{
		if (i >= start && i <= end && arr[i] > 0)
		{
			for (int j = i; j < arr_current_size - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr_current_size--;
			end--;
		}
		else  i++;
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