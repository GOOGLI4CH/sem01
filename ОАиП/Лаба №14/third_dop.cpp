#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("������� 1.1 (C)\n");

	int* A;
	int N, counter = 0;

	printf("������� ������ ������� ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("������� �������� �������\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < 0)
		{
			counter++;
		}
	}

	printf("���������� ������������� ��������� %d\n", counter);

	int minABS = abs(*A), buf = 0;

	for (int i = 0; i < N; i++)
	{
		if (abs(*(A + i)) < minABS)
		{
			minABS = abs(*(A + i));
			buf = i + 1;		//������ 1, ���� ��������� �� �������� ������� � ����������� �������.
		}
	}

	printf("������ ������������ �������� %d\n", minABS);

	int sumABS = 0;

	for (int i = buf; i < N; i++)
	{
		sumABS += *(A + i);
	}

	printf("����� %d\n", sumABS);

	free(A);



	cout << "������� 1.2 (C++)" << endl;

	int** matrix;
	int row, element;

	cout << "������� ���������� �����, ����� ���������� ��������" << endl;
	cin >> row;
	cin >> element;

	matrix = new int* [row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[element];
		
		for (int j = 0; j < element; j++)
		{
			matrix[i][j] = rand() % 10 - 2;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	counter = 0, buf = 0;
	int flag = 0;

	for (int i = 0; i < element; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (matrix[j][i] >= 0)		//���� ��������� ��������� 0, �� ���� ������� ������� �������
			{
				counter++;

			}

			if (counter == row)
			{
				cout << "����� ������� ������� � �������������� ���������� " << i + 1 << endl;
				buf = i;
				flag++;
				break;
			}
		}

		counter = 0;

		if (flag == 1)
		{
			break;
		}
	}
	
	int column = buf - 1;		//��� ������ ��������� ����������� �������
	int j = 0;

	if (column < 0)
	{
		cout << "��� ����������� �������" << endl;
	}
	else
	{
		cout << "��������� �������" << endl;

		while (j < row)
		{
			matrix[j][column] = matrix[j][column] * (-1);
			j++;
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}
	}

	delete[] matrix;
}