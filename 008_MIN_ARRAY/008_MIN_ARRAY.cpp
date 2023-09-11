// ****************************************************************************
// Найти минимальный элемент массива. Поиск минимального элемента в массиве. 
// C++ для начинающих. ДЗ #8. | C++ для начинающих
// ----------------------------------------------------------------------------
// Visual Studio 2022
// ----------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ****************************************************************************
#include <iostream>
#include "utils.h"

using namespace std;


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "*********** ARRAY-MIN ***********" << endl;
	cout << endl;

	const int SIZE = 10; // Константа
	int arr[SIZE];
	bool alreadyThere;  // флаг существущих значений

	srand(time(NULL));	// для случайных чилел в цикле

	// --- ГЕНЕРАЦИЯ МАССИВА ---
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

	// --- МИН. ЭЛЕМЕНТ МАССИВА ---
	// Поиск наименьшего элемента в массиве 

	int minValue = arr[0]; // Инициализация нулевым элементом 

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i]; // Перебор всех чисел для поиска мин.значения  
		}
	}
	cout << "\nНаименьшее чиcло в массиве: " << minValue << endl;


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}