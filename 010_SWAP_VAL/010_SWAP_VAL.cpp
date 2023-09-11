// *****************************************************************************
// Напишите функцию, меняющую местами значения переменных с помощью указателей.
// С++ для начинающих ДЗ #9 | C++ для начинающих |
// -----------------------------------------------------------------------------
// Visual Studio 2022 
// -----------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// *****************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

void Swap(int*, int*);

/********************************
			   main
*********************************/
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	int var1 = 32;
	int var2 = 64;

	cout << "\n*********** SWAP VALUES ***********" << endl;
	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;
	cout << endl << "S W A P " << endl << endl;

	Swap(&var1, &var2);

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}

/*-----------------------
		  Swap
------------------------*/
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}