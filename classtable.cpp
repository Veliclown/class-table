#include <iostream>
using namespace std;
#include "windows.h"
#define _USE_MATH_DEFINES


HANDLE hConsole;

int main()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int t;
	SetConsoleTextAttribute(hConsole, a);
	cout << "Впиши свій номер дня тижня \n щоб дізнатися про заняття наприклад\n(Ведіт число від 1 до 7)\n 1-понеділок,2-вівторок, 3-середа, 4-четврег , 5-пятниця , 6-субота , 7-неділя " << endl;
	cin >> t;
	switch (t)
	{
	case 1: cout << "(2)Укр.мова(10:30)\n(3)Історя та культура(12:30)\n(4)Історя та культура(14:00)"; break;
	case 2: cout << "(1)ІТ.обухова(9:00)\n(2)ІТ.обухова(10:30)\n(3)Вищя математика(12:30)\n(4)Програмування(14:00)\n(5)ОПІ.Кандиба(15:30)"; break;
	case 3: cout << "(1)Філософія та суспільствознавство(9:00)\n(2)Іноземна мова(10:30)\n(3)Українська мова(12:30)\n(4)Інформаційні технології(14:00)"; break;
	case 4: cout << "(1)ІТ Обухова(9:00)\n(2)Основи програмної інженерії Кандиба(10:30)\n(3)Філософія та суспільствознавство(12:30)\n(4)Історія та культура України(14:00)"; break;
	case 5: cout << "Вихідной\n"; break;
	case 6: cout << "Вихдіний\n"; break;
	case 7: cout << "Вихідний\n"; break;
	default: cout << "Я не розумію, введіть коректне число\n"; break;
	}
	system("pause");
	return 0;
}