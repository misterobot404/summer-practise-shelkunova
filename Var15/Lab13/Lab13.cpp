/*
Преобразовать заданную последовательность чисел c путем удаления из нее
всех положительных чисел с номерами от k до m
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float arr[] = { 1, 5.2, -3, 13, -12.1,8,-5,16,48 };
	int arr_current_size = sizeof(arr)/sizeof(*arr);

	// Распечатка исходного массива
	cout << "Начальный массив: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Диапазон положительных чисел для удаления  (от 1 до " << arr_current_size << "):" << endl;
	cout << "Начало диапазона: " << endl;
	int start;
	cin >> start;
	start--;
	cout << "Конец диапазона:" << endl;
	int end;
	cin >> end;
	end--;

	// Удаление элементов из исходного массива
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

	cout << "Результирующий массив: ";
	// Распечатка результ массива
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}