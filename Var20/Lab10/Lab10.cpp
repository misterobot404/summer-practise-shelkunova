#include <iostream>
using namespace std;

double recursion(size_t position)
{
	if (position < 101) return position + 1 / recursion(position + 2);
	else return 101 + 1 / 103;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << endl << "Сумма ряда: " << 1 / recursion(1) << endl;
	system("pause");
	return 0;
}
