/*
—формировать новую последовательность d из нечетных чисел с четными номерами, 
расположенных до первого по пор€дку минимального числа в исходной последовательности a.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = {1,4,2, 5, 3, 13, -12};
	int arr_sort[sizeof(arr) / sizeof(*arr)];
	int index_min_el = 0;

	// Ќахождение номера минимального элемента и распечатка массива
	cout << "Ќачальный массив: ";	
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
	{
		cout << arr[i] << " ";
		if (arr[i] < arr[index_min_el])
			index_min_el = i;
	}

	int counter = 0;
	// «аполнение нового массива чЄтными эл
	for (int i = 1; i < sizeof(arr) / sizeof(*arr) + 1; i+=2)
	{
		if (arr[i] % 2 != 0)
		{
			arr_sort[counter] = arr[i];
			counter++;
		}	
	}

	cout << endl;
	cout << "Ќомер минимального значени€ (счЄт идЄт с единицы): " << index_min_el+1 << endl;
	cout << "ѕоследовательность из нечетных чисел с четными номерами, расположенных до первого по пор€дку минимального числа в исходной последовательности: ";

	// –аспечатка сформированного массива
	for (int i = 0; i < counter; i++)
	{
		cout << arr_sort[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}