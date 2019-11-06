/*
Ќечетные числа заданного массива d, расположенные до первого по пор€дку минимального числа, переписать в новый массив b
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = {13, 11, -6, 13, 2, -12, 5, 3, -12};
	const int arr_size = sizeof(arr) / sizeof(*arr);
	int arr_res[arr_size];
	int index_last_min_el = 0;

	// Ќахождение первого номера минимального числа и распечатка массива
	cout << "Ќачальный массив: ";	
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
		if (arr[i] < arr[index_last_min_el])
			index_last_min_el = i;
	}

	int counter = 0;
	// «аполнение нового массива нечетными числами расположенными
	// до первого по пор€дку максимального числа исх массива
	for (int i = 0; i < index_last_min_el; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr_res[counter] = arr[i];
			counter++;
		}	
	}

	cout << endl;
	cout << "Ќомер первого минимально элемента (счЄт идЄт с единицы): " << index_last_min_el+1 << endl;
	cout << "Ќовый массив заполненный нечетными числами расположенными до  первого \nминимального элемента исходного массива: ";

	// –аспечатка сформированного массива
	for (int i = 0; i < counter; i++)
	{
		cout << arr_res[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}