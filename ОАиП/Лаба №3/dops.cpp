#include <iostream>
#include <iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char probel; probel = ' ';

	//������� 8

	char f;
	cout << "������� 8";
	cout << "\n������� ������ ";
	cin >> f;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;

	double x, y, z, p, s;
	cout << "\n������� ������� ������������ ";
	cin >> x;
	cout << "\n������� ������� ������������ ";
	cin >> y;
	cout << "\n������� ������� ������������ ";
	cin >> z;
	p = (x + y + z) / 2;
	s = sqrt(p * (p - x) * (p - y) * (p - z));
	cout << "\n������� ������������ ����� " << s;

	//������� 11

	char c;
	cout << "\n������� 11";
	cout << "\n������� ������ ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	double a, d, s_1;
	cout << "\n������� ��������� �������� ";
	cin >> d;
	a = d / sqrt(2);
	s_1 = pow(a, 2);
	cout << "\n������� �������� ����� " << s_1;

	//������� 13

	char n;
	cout << "\n������� 13";
	cout << "\n������� ������ ";
	cin >> n;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(11) << setfill(n) << n << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(9) << setfill(n) << n << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(7) << setfill(n) << n << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(41) << setfill(probel) << probel;
	cout << setw(1) << setfill(n) << n << endl;

	double n_1;
	cout << "\n���������� ������� = ";
	cin >> n_1;
	double m, t;
	cout << "\n���������� ����� ������ ������ ������� = ";
	cin >> m;
	t = (2 * m + (n_1 - 1) / 6) / 2 * n_1;
	cout << "\n����� ������ = " << t;
}