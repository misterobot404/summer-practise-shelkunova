/*
���������� � ����� ������ � �������� ����� ��������� ������� �, 
������������� ����� ���������� �� ������� ������������� �����
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = {13, 11, -6, 13, 2, 5, 3, -12};
	const int arr_size = sizeof(arr) / sizeof(*arr);
	int arr_res[arr_size];
	int index_last_max_el = 0;

	// ���������� ���������� ������ ������������� �������� � ���������� �������
	cout << "��������� ������: ";	
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
		if (arr[i] >= arr[index_last_max_el])
			index_last_max_el = i;
	}

	int counter = 0;
	// ���������� ������ ������� ��������� ������� ��������������
	// ����� ���������� �� ������� ������������� ����� ��� �������
	for (int i = index_last_max_el + 1; i < arr_size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr_res[counter] = arr[i];
			counter++;
		}	
	}

	cout << endl;
	cout << "����� ������������� �������� (���� ��� � �������): " << index_last_max_el+1 << endl;
	cout << "����� ������ ����������� ��������� ������� �������������� ����� ���������� �� ������� \n������������� �������� ��������� �������: ";

	// ���������� ��������������� �������
	for (int i = 0; i < counter; i++)
	{
		cout << arr_res[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}