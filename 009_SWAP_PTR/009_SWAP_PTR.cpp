// ******************************************************************************
// Напишите функцию, меняющую местами значения переменных с помощью указателей. 
// С++ для начинающих ДЗ #9 | C++ для начинающих
// ------------------------------------------------------------------------------
// Visual Studio 2022
// ------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ******************************************************************************

#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

// T E M L A T E   F U N C T I ON 
template <typename T>
void Swap(T a, T b)
{
	cout << " A\t = " << a << endl;
	cout << " B\t = " << b << endl;
	cout << endl << " S W A P " << endl << endl;

	T temp = a;
	a = b;
	b = temp;

	cout << " A\t = " << a << endl;
	cout << " B\t = " << b << endl;
	cout << endl;
}


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "*********** SWAP INT ***********" << endl;
	int var1 = 32;
	int var2 = 64;
	Swap(var1, var2);  // FOR INT

	cout << "*********** SWAP FLOAT ***********" << endl;
	float var3 = 32.12;
	float var4 = 64.34;
	Swap(var3, var4);  // FOR FLOAT

	cout << "*********** SWAP CHAR ***********" << endl;
	char var5 = 'A';
	char var6 = 'B';
	Swap(var5, var6);  // FOR CHAR

	cout << "*********** SWAP STRING ***********" << endl;
	//char* var7 = "ПРИВЕТ"; // no working to VS2019
	//char* var8 = "МИР";
	string var7 = "ПРИВЕТ";
	string var8 = "МИР";

	Swap(var7, var8);  // FOR STRING

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}