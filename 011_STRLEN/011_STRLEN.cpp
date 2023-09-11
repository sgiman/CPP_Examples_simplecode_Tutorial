// **********************************************************************************************
// strlen c++ реализация. Посчитать количество символов в строке c++ ДЗ #11 | C++ для начинающих
// ----------------------------------------------------------------------------------------------
// Visual Studio 2022
// ----------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// **********************************************************************************************

#include <iostream>
#include <clocale>
#include <string>
#include "utils.h"


using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "\n*********** STRING LENGTH ***********" << endl;

	string str = "";

	cout << "ENTER STRING: ";

	getline(cin, str);

	cout << "STRING = " << str << endl;

	cout << "LENGTH  = " << str.length() << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
