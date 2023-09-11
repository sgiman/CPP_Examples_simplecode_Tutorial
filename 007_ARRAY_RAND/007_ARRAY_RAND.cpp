// ******************************************************************************
// Заполнить массив случайными числами. 
// Генератор уникальных случайных чисел. rand. srand ДЗ #7 | C++ для начинающих
// ------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ******************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "*********** ARRAY-RAND ***********" << endl;
	cout << endl;

	const int SIZE = 10; // Константа
	int arr[SIZE];
	bool alreadyThere;  // флаг существущих значений

	// srand(time(NULL));

	// Цикл заполнения
	for (int i = 0; i < SIZE;) // цикл по массиву
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++) // проверка на дубли  
		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;  // уже есть!
				break;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRandomValue; // уникальное случайное число 
			i++;
		}

	}

	// Цикл вывода
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}