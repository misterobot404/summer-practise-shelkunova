/*
Расширить заданную последовательность чисел c, вставив в нее заданное
число a перед каждым числом, равным заданному числу b
*/

#include <iostream>
using namespace std;

const int arr_max_size = 128;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr_current_size = 8;
	float arr[arr_max_size] = { 1, 5.2, -3, 13, -12.1, 1,6,1 };

	// Распечатка исходного массива
	cout << "Начальный массив: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	float el;
	cout << "Введите элемент для вставки: ";
	cin >> el;

	float before;
	cout << "Элемент исходного массива перед которым будет произведена вставка: ";
	cin >> before;

	// Вставка элемента в исходный массив
	for (int i = 0; i < arr_current_size; i++)
	{
		if (arr[i] == before)
		{
			// перемещение эл массива вправо на одну позицию
			for (int j = arr_current_size; j >= i; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[i] = el;
			arr_current_size++;
			i+=2;
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