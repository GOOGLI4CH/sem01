#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;

	//������� 4

	printf("������� 4");
	float a_1, b_1, p, q, r_1, s_1;
	printf("\n������� ������� �������");
	printf("\n������ = ");
	scanf_s("%f", &a_1);
	printf("����� = ");
	scanf_s("%f", &b_1);
	printf("������� ������� ������� ����");
	printf("\n������ ������� ���� = ");
	scanf_s("%f", &p);
	printf("����� ������� ���� = ");
	scanf_s("%f", &q);
	printf("������� ������� ������� ����");
	printf("\n������ ������� ���� = ");
	scanf_s("%f", &r_1);
	printf("����� ������� ���� = ");
	scanf_s("%f", &s_1);
	if (
		(a_1 * b_1) >= (p * q) + (r_1 * s_1) &&
		(a_1 >= p && a_1 >= r_1) &&
		(b_1 >= q && b_1 >= s_1)
		)
		printf("����� ����������");
	else
		printf("������ ����������");

	//������� 5

	printf("\n������� 5");
	float r_2, p_1, q_1, r_3;
	printf("\n������� ������ ����");
	printf("\nr = ");
	scanf_s("%f", &r_2);
	printf("������� ��������� �����");
	printf("\np = ");
	scanf_s("%f", &p_1);
	printf("q = ");
	scanf_s("%f", &q_1);
	r_3 = (p_1 * q_1) / (sqrt(pow(p_1 / 2, 2) + pow(q_1 / 2, 2)) * 4);
	if (
		(r_2 <= r_3)
		)
		printf("�����");
	else
		printf("�� �����");

	//������� 6

	printf("\n������� 6");
	float a, b, c, r, s, t;
	printf("\n������� ������� �������");
	printf("\na = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);
	printf("������� ������� �������");
	printf("\nr = ");
	scanf_s("%f", &r);
	printf("s = ");
	scanf_s("%f", &s);
	printf("t = ");
	scanf_s("%f", &t);
	if (a <= r && b <= s && c <= t)
		printf("����� ���������");
	else
		printf("������ ���������");
}