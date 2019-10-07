#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float n;
	cout << "Введите n: ";
	cin >> n;
	long long result = 0, tempRes = 1, temp;

	for (int i = 1; i < n; i++, tempRes=1)
	{
		
		// Вычисление степени очередного члена ряда
		for (int fact_temp = 1; fact_temp <= i; fact_temp++)
			tempRes *= fact_temp;

		// Вычисление очередного члена ряда
		tempRes = pow(2, tempRes);

		// Прибавление очередного члена ряда к итоговой сумме
		result += tempRes;

		cout << "Значение " << i << " члена ряда: " << tempRes << endl;
	}
	cout << endl << "Сумма ряда: " << result << endl;

	system("pause");
	return 0;
}