#include <iostream> 

using namespace std;

int ascii()
{
	setlocale(LC_ALL, "rus");

	string end = "end";
	char c;
	cout << "������� ����� � ��������� ���������: \n";
	cin >> c;

	for (int i = 1; i <= 50; i++)
	{
		if (65 <= c && c <= 90) //������� �������
		{
			cout << "������� ����� ������: " << int(c) - 32 << endl;
			cout << "��� ������ �������:" << "0x" << int(c) << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else if (97 <= c && c <= 122) //������ �������
		{
			cout << "������� ����� ������: " << int(c) - 32 << endl;
			cout << "��� ������ �������:" << "0x" << int(c) << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}
		}
		else {
			cout << "��������� ����" << endl;
			cout << "������� end ����� ������� ���������,���� ��� ������, ����� ����������" << endl;
			cin >> end;
			if (end == "end") {
				return(0);
			}

		}
	}
}