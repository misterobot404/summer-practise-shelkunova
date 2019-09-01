/*
Расширить заданный одномерный массив b, вставив заданный элемент a до каждого положительного элемента
*/

#include <iostream>
using namespace std;

const int arr_max_size = 128;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr_current_size = 5;
	float arr[arr_max_size] = { 1, 5.2, -3, 13, -12.1 };

	// Распечатка исходного массива
	cout << "Начальный массив: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	float el;
	cout << "Введите элемент для вставки в исходный массив после каждого положительного элемента: ";
	cin >> el;

	// Вставка элемента в исходный массив
	for (int i = 0; i < arr_current_size; i++)
	{
		if (arr[i] > 0)
		{
			// перемещение эл массива вправо на одну позицию
			for (int j = arr_current_size; j > i; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[i + 1] = el;
			arr_current_size++;
			i++;
		}
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