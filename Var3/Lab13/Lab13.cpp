/*
Преобразовать заданную последовательность чисел c путем удаления из нее
всех чисел больше заданного значения a
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float arr[] = { 1, 5.2, -3, 13, -12.1,8,-5,16,48 };
	int arr_current_size = sizeof(arr) / sizeof(*arr);

	// Распечатка исходного массива
	cout << "Начальный массив: ";
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Введите значение: ";
	int value;
	cin >> value;

	// Удаление элементов из исходного массива
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

	cout << "Результирующий массив (числа больше " << value << " были удалены): ";
	// Распечатка результ массива
	for (int i = 0; i < arr_current_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}