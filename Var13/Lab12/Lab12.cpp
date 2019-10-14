/*
ѕереписать в новый массив — нечетные числа заданного массива ј, 
расположенные после последнего по пор€дку максимального числа
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

	// Ќахождение последнего номера максимального элемента и распечатка массива
	cout << "Ќачальный массив: ";	
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
		if (arr[i] >= arr[index_last_max_el])
			index_last_max_el = i;
	}

	int counter = 0;
	// «аполнение нового массива нечетными числами расположенными
	// после последнего по пор€дку максимального числа исх массива
	for (int i = index_last_max_el + 1; i < arr_size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr_res[counter] = arr[i];
			counter++;
		}	
	}

	cout << endl;
	cout << "Ќомер максимального элемента (счЄт идЄт с единицы): " << index_last_max_el+1 << endl;
	cout << "Ќовый массив заполненный нечетными числами расположенными после последнего по пор€дку \nмаксимального элемента исходного массива: ";

	// –аспечатка сформированного массива
	for (int i = 0; i < counter; i++)
	{
		cout << arr_res[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}