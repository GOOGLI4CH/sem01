#include <iostream>
#include <consoleapi2.h>

using namespace std;

int windows1251()
{

	setlocale(LC_ALL, "rus");

	string end = "end";
	char c;
	cout << "������� ������ ��������� :";
	cin >> c;// -32 -1
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i = 1; i <= 50; i++)
	{
		if (-64 <= c && c <= -33) //������� �������
		{
			cout << "0x" << hex << int(c) << endl;
			cout << "������� ����� ������ :" << int(c) - 32 << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else if (-32 <= c && c <= -1) //������ �������
		{
			cout << "0x" << hex << int(c) << endl;
			cout << "������� ����� ������ :" << int(c) - 32 << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else
		{
			cout << "��������� ����" << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
	}
}
