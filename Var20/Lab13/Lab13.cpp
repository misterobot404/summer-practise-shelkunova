/*
В заданном одномерном массиве b удалить все элементы, равные заданному значению a
*/

#include <iostream>
using namespace std;

const int arr_max_size = 128;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr_current_size = 8;
	float arr[arr_max_size] = { 1, 5.2, -3, 13, -12.1, 1,6, 1 };

	// Распечатка исходного массива
	cout << "Начальный массив: ";
	for (int i = 0; i < arr_current_size; i++) cout << arr[i] << " ";
	cout << endl;

	// Удаление элементов из исходного массива
	float el;
	cout << "Введите элемент для удаления: ";
	cin >> el;

	for (int i = 0; i < arr_current_size;)
	{
		if (arr[i] == el)
		{
			// перемещение эл массива влево на одну позицию
			for (int j = i; j < arr_current_size; j++)
			{
				arr[j] = arr[j+1];
			}
			arr_current_size--;
		}
		else  i++;
	}

	cout << "Результирующий массив: ";
	// Распечатка результ массива
	for (int i = 0; i < arr_current_size; i++) cout << arr[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}