#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

int main()
{
	//������� 12 

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "������� ������ ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;

	int n;
	double x, y, z;
	cout << "\n������� ����� ";
	cin >> n;
	x = (n % 10);
	y = (n % 100) / 10;
	z = (n / 100);
	cout << "��������� ";
	cout << x;
	cout << y;
	cout << z;
}