// *****************************************************************************
// Switch. Калькулятор. Меню. Домашнее задание. С++ #3. | C++ для начинающих 
// -----------------------------------------------------------------------------
// Visual Studio 2022
// -----------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2023 @ sgiman
// *****************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	setlocale(LC_CTYPE, "rus");
	cout << "*********** PARITY ***********" << endl;
	cout << endl;

	int a, b, selection;

	cout << "Введите 2 числа" << endl;
	cin >> a >> b;
	cout << "Выберите математическую операцию: \n" << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление\n" << endl;

	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "\nРезультат сложения  =  " << a + b << endl;
		break;
	case 2:
		cout << "\nРезультат вычитания = " << a - b << endl;
		break;
	case 3:
		cout << "\nРезультат умножения = " << a * b << endl;
		break;

	case 4:
		try
		{
			if (b == 0) throw 123;	// code error if divide on zero 
			cout << "\nРезультат деления = " << (float)a / b << endl;
		}
		catch (int i)				// отловленный код ошибки - завершить!
		{
			cout << "Error: " << i << " - divide by 0!!!" << endl;
		}
		break;

	default:
		cout << "\nОшибка! Пункт меню отсуствует!" << endl;
		break;
	}


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}