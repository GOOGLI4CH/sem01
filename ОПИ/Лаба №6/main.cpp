#include <iostream>
#include<stdio.h>
#include <windows.h>
#include "case1.h"
#include "case2.h"
#include "case3.h"
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	printf("1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
	printf("\n2 Ц определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
	printf("\n3 Ц вывод в консоль кода символа, соответствующего введенной цифре;");
	printf("\n4 Ц выход из программы.");
	printf("\n----------------------------------------------------------------------------------------------");
	printf("\n¬ведите вариант = ");
	cin >> a;

	switch (a)

        case 1: {
		ascii();
		break;

		case 2:
			windows1251();
			break;
		case 3:
			num();
			break;
		case 4:
			return 0;
	}
}