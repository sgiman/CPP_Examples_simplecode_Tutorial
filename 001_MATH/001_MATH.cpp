// ********************************************************************************************************
// Домашнее задание.C++. Сумма, произведение, среднее арифметическое чисел.ДЗ #1 | C++ для начинающих |
// С++ | Visual Studio 2022 
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ********************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "*********** MATH ***********" << endl;

	int a, b, c;

	cout << " Введите три числа: " << endl;
	cin >> a >> b >> c;
	cout << endl;
	cout << " Сумма трех чисел = " << a + b + c << endl;
	cout << " Произведение трех чисел = " << a * b * c << endl;
	cout << " Cредне арифмтическое трех чисел = " << (double)(a + b + c) / 3 << endl;
	cout << endl;


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
