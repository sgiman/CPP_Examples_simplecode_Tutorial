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

	cout << "*********** RECTANGLE ***********" << endl;
	cout << endl;

	int height, width;

	cout << "Введите высоту прямоугольника: ";
	cin >> height;

	cout << "Введите ширину прямоугольника: ";
	cin >> width;
	cout << endl;

	for (int j = 0; j < height; j++)	// цикл заполнения для высоты
	{
		for (int i = 0; i < width; i++) // цикл заполнения для ширины
		{
			cout << "*";
		}
		cout << endl;
	}


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}