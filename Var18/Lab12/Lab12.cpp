/*
������ ������������������ ����� d. 
����� � ��� ���������� ����� ������������ ��������. 
������������ ����� ������������������ c �� �����, ������������� ������� �� ������ ������, � ����� �� �������� ������ � �������� ������������������ d.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float arr[] = {1, 5.2, 3, 13, -12.1};
	float arr_sort[sizeof(arr) / sizeof(*arr)];
	int index_min_el = 0;

	// ���������� ����������� ������ ������������ �������� � ���������� �������
	cout << "��������� ������: ";	
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
	{
		cout << arr[i] << " ";
		if (arr[i] <= arr[index_min_el])
			index_min_el = i;
	}

	int counter = 0;
	// ���������� ������� ������� ��
	for (int i = 0; i < sizeof(arr) / sizeof(*arr) + 1; i+=2, counter++)
	{
		arr_sort[counter] = arr[i];
	}
	// ���������� ������� �� ������� ��
	for (int i = 1; i < sizeof(arr) / sizeof(*arr) + 1; i+=2, counter++)
	{
		arr_sort[counter] = arr[i];
	}

	cout << endl;
	cout << "���������� ����� (���� ��� � �������) ������������ ��������: " << index_min_el+1 << endl;
	cout << "��������������� ������, � ������� ������� ����������� ������, � ����� �������� �������� ��������� �������: ";
	// ���������� ���������������� �������
	for (int i = 0; i < sizeof(arr_sort) / sizeof(*arr_sort); i++)
	{
		cout << arr_sort[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}