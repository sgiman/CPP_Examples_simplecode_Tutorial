// ***********************************************************************************
// Вложенная конструкция. Вложенный цикл. Домашнее задание #6 | C++ для начинающих
// -----------------------------------------------------------------------------------
// Visual Studio 2022 
// -----------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ***********************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	//setlocale(LC_CTYPE, "rus");

	cout << "*********** WHILE ***********" << endl;
	cout << endl;

	int symCount;
	char sym;
	int lineType; // 1 - hor, 2 - vert
	int index = 0;

	cout << " Введите кол-во симоолов в линии: ";
	cin >> symCount;

	cout << " Введите символ: ";
	cin >> sym;

	cout << " \nВыберите тип линии: " << endl
		<< " 1 - вертикальная линия" << endl
		<< " 2 - горизинтлная линия" << endl;

	cin >> lineType;

	if (lineType != 1 && lineType != 2)
	{
		cout << " \nНе корректный тип линии!\n" << endl;
		return 1;
	}

	while (index < symCount)
	{
		if (lineType == 1)	// Vertical Line for symbols
		{
			cout << sym << endl;
		}
		if (lineType == 2)	// Horizontal Line for symbols
		{
			cout << sym;
		}
		index++;
	}

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}