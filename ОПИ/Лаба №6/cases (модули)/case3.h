#include <iostream>

using namespace std;

int num()
{

	setlocale(LC_ALL, "rus");

	string end = "end";
	char c;
	cout << "������� ����� :";
	cin >> c;

	for (int i = 1; i <= 50; i++)
	{
		if (48 <= c && c <= 57)
		{
			cout << "��� ������� = " << "0x" << hex << int(c) << endl;
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