// *********************************************************************************
// Вложенная конструкция. Вложенный цикл. Домашнее задание #6 | C++ для начинающих
// ---------------------------------------------------------------------------------
// Visual Studio 2022 
// ---------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// *********************************************************************************

#include <iostream>
#include "utils.h"


using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "*********** DO-WHILE ***********" << endl;
	cout << endl;

	int sum = 0;
	int rangeBegin, rangeEnd;

	cout << "Введите начало дипазона: ";
	cin >> rangeBegin;

	cout << "Введите конец дипазона: ";
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}

		rangeBegin++;

	} while (rangeBegin < rangeEnd);

	cout << "Сумма всех целых нечетных чисед в указанном диапазоне = : " << sum << endl;


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}