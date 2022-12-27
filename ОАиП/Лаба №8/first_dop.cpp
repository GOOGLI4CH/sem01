#include <iostream>

using namespace std;

double function(double x)
{
	return 5 - pow(x, 2);
}

double function2(double x)
{
	return 2 - pow(x, 2) + x;
}

double diff(double x)
{
	return -2 * x + 1;
}

int main()
{

	setlocale(LC_ALL, "rus");

	cout << "\t\t\t������� 5" << endl;
	cout << "����� ��������" << endl;

	double a = 8, b = 12, x, s = 0, h, n = 200;

	x = a;

	for (int i = 0; i < n; i++)
	{
		h = (b - a) / n;
		s = s + h * (function(x) + function(x + h)) / 2;
		x = x + h;
	}
	if (x > (b - h))
	{
		cout << "\t�������� (����� ��������) = " << s << endl;
	}



	cout << "����� ��������" << endl;

	double s1 = 0, s2 = 0, z;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	for (int i = 1; i < n; i++)
	{
		s2 += function(x);
		x += h;
		s1 += function(x);
		x += h;
	}

	z = h / 3 * (function(a) + 4 * function(a + h) + 4 * s1 + 2 * s2 + function(b));

	cout << "\t�������� (����� ��������) = " << z << endl;



	cout << "����� �����������" << endl;

	double e = 0.0001, x1 = 0;

	if (function2(a) * diff(a) > 0)
	{
		a = x;
	}
	else
	{
		b = x;
	}

	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (function2(x) / diff(x));
	}

	if (abs(x1 - x) > e)
	{
		cout << "\tx (����� �����������) = " << x << endl;
	}
	else
	{
		cout << "\tx (����� �����������) = " << x << endl;
	}



	cout << "����� ���������" << endl;

	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;

		if (function2(x) * function2(a) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}

	cout << "\tx (����� ���������) = " << x << endl;


}