#include <iostream> 

using namespace std;

int ascii()
{
	setlocale(LC_ALL, "rus");

	string end = "end";
	char c;
	cout << "Введите букву в прописном написании: \n";
	cin >> c;

	for (int i = 1; i <= 50; i++)
	{
		if (65 <= c && c <= 90) //верхний регистр
		{
			cout << "Разница между кодами: " << int(c) - 32 << endl;
			cout << "Код вашего символа:" << "0x" << int(c) << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else if (97 <= c && c <= 122) //нижний регистр
		{
			cout << "Разница между кодами: " << int(c) - 32 << endl;
			cout << "Код вашего символа:" << "0x" << int(c) << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else {
			cout << "Ошибочный ввод" << endl;
			cout << "Введите end чтобы закрыть программу,либо что угодно, чтобы продолжить" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}

		}
	}
}