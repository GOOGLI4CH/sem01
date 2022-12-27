#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("������� 11.1 (C)\n");

	int* A;
	int N;

	printf("������� ������ ������� ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("������� �������� �������\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	int flag = 0;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) == 0)
		{
			printf("����� ������� �������� �������� %d\n", (i + 1)); //i+1 ��� ����������� ���������.
			flag = 1;
			break;
		}
		if (flag == 0)
		{
			printf("��� ������� ���������\n");
			break;
		}
	}

	free(A);



	cout << "������� 11.2 (C++)" << endl;

	const int SIZE = 4;
	int matrix[SIZE][SIZE] = {};

	/*cout << "������� �������� ������� " << endl;*/

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			matrix[i][j] = rand() % 2;
			/*cin >> matrix[i][j];*/		//��� ����� �������
		}
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	int counter = 0;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (matrix[i][j] == matrix[j][i])
			{
				counter++;
			}
		}

		if (counter == SIZE)
		{
			cout << "K " << i + 1 << endl;
		}

		counter = 0;
	}

	delete[] matrix;
}