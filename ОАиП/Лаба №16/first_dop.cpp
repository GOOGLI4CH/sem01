#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;
int& z1(int i, int n, int* ptr) {
	int sum = 0;
	printf("\nMassiv: \n");

	for (i = 0; i < n; i++) {
		printf("%d ", *(ptr + i));
	}

	for (i = 0; i < n; i++) {
		if (*(ptr + i) % 2 != 0)
			sum += *(ptr + i);
	}
	return sum;
}


void z2(int i, int j, int row, int element, int* matrix) {
	cout << endl << "�������: " << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			cout << setw(4) << *(matrix + i * element + j);
		}
		cout << endl;
	}

	cout << endl;

	int flag = 0, buf = 0;
	for (i = 0; i < row; i++)
	{
		if (flag == 0)
		{
			for (j = 0; j < element; j++)
			{
				if (*(matrix + i * element + j) > 0)
				{
					cout << "����� ������ ������ � ������������� ��������� " << i + 1 << endl;
					buf = i;
					flag = 1;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}

	j = 0;
	i = buf - 1;
	if (i < 0)
	{
		cout << "��� ���������� ������!" << endl;
	}
	else
	{
		while (j < element)
		{
			*(matrix + i * element + j) = *(matrix + i * element + j) * (-1);
			j++;

		}

	}
}



int main(int sum)
{


	int* ptr, i, n;
	setlocale(0, "");
	srand(time(NULL));
	printf("1. ������� ���������� ������, ���������� 15 ���������, \n ��������� ��� ���������� ���������� � ��������� �� 1 �� 200. \n ���������� ����� ���� �������� ��������� �������. \n\n\n");
	printf("������� ������ �������(�� ������ ���� 15 �� �������) \n");
	do {
		scanf_s("%d", &n);
		if (n != 15)
			printf("\n����� ������ ����� 15 �� ������� �������\n");
	} while (n != 15);
	ptr = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		/*printf("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);*/
		*(ptr + i) = rand() % 200 + 1;
		/*if (*(ptr + i) > 200 || *(ptr + i) < 1) {
			cout <<"����� ������ ����� �� 1 �� 200" << endl;
			printf("Input element [%d]\n", i + 1);
			scanf_s("%d", ptr + i);
		}*/

	}

	printf("\n����� �������� ���������= %d\n", z1(i, n, ptr));

	free(ptr);     //������������ ������������ ������
	cout << endl;
	system("pause");


	printf("\n\n\n2. ���������, ���� �� � ������� ���� �� ���� ������, \n���������� ������������� ������� � ����� �� �����. \n����� ��������� ���������� ������ �������� �� ���������������. \n\n\n");


	int row, element, j;
	int* matrix;

	cout << "������� ���������� ����� " << endl;
	cin >> row;
	cout << "������� ���������� �������� " << endl;
	cin >> element;
	cout << endl << endl;
	matrix = new int[row * element];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			*(matrix + i * element + j) = rand() % 11 - 8;
			//cout << setw(4) << *(matrix + i * element + j);
			//cout << "������� " << j + 1 << " ������� " << i + 1 << " ������" << endl;
			//cin >> *(matrix + i * element + j);
		}
		//cout << endl;
	}

	z2(i, j, row, element, matrix);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			cout << setw(4) << *(matrix + i * element + j);
		}
		cout << endl;
	}

	delete[] matrix;
	cout << endl;
	system("pause");
}