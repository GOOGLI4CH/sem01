#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;

	//������� 4

	float x, y, z, min, max;
	printf("������� x "); scanf_s("%f", &x);
	printf("������� y "); scanf_s("%f", &y);
	printf("������� z "); scanf_s("%f", &z);
	if (((x + y + z) / 2) < (x * y * z))
		min = ((x + y + z) / 2);
	else
		min = (x * y * z);
	if ((x * y) > (y))
		max = x * y;
	else
		max = y;
	printf("min(x+y+z / 2, xyz) + max(xy, y) = %f", min + max);

	//������� 5

	int n;
	float x_1, m;
	printf("\n������� ������� ��������� (1-km, 2=m, 3=cm, 4=mm) ");
	cin >> n;
	switch (n)
	{
	case 1:
		printf("������� �������� � ���������� ");
		scanf_s("%f", &x_1);
		m = x_1 * 1000;
		printf("�������� � ������ = %f", m);
		break;
	case 2:
		printf("������� �������� � ������ ");
		scanf_s("%f", &x_1);
		m = x_1;
		printf("�������� � ������ = %f", m);
		break;
	case 3:
		printf("������� �������� � ����������� ");
		scanf_s("%f", &x_1);
		m = x_1 / 100;
		printf("�������� � ����������� = %f", m);
		break;
	case 4:
		printf("������� �������� � ���������� ");
		scanf_s("%f", &x_1);
		m = x_1 / 1000;
		printf("�������� � ���������� = %f", m);
		break;
	default:
		printf("�������� ��������");
		break;
	}

	//������� 6

	int n_1;
	printf("\n�� ������ ������ ����������? (1-��, 2-���) ");
	cin >> n_1;
	switch (n_1)
	{
	case 1:
		printf("����� ���������� �� ������ ������? (1-����, 2-���, 3-����");
		cin >> n_1;
		switch (n_1)
		{
		case 1:
			printf("�� �����");
			break;
		case 2:
			printf("������� �����");
			break;
		case 3:
			printf("������������ �����");
			break;
		}
		break;
	case 2:
		printf("�� ����� �����");
		break;
	default:
		printf("����������� �������");
		break;
	}

}