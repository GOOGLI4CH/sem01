#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int MAX_SIZE = 100;
	setlocale(LC_ALL, "rus");

	cout << "������� 12 (������)" << endl;

	int matrix[MAX_SIZE][MAX_SIZE] = {};
	int n, m, sum = 0, mul = 1;

	cout << "������� N, ����� M" << endl;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 10 - 5;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < 0 && matrix[i][j] % 2 != 0 && abs(matrix[i][j]) < i)
			{
				sum += matrix[i][j];
				mul *= matrix[i][j];
			}
		}
	}

	cout << "����� " << sum << endl;
	cout << "������������ " << mul << endl;



	//cout << "������� 12 (���������)" << endl;

	//int matrix[MAX_SIZE][MAX_SIZE] = {};
	//int n, m, sum = 0, mul = 1;

	//cout << "������� N, ����� M" << endl;
	//cin >> n;
	//cin >> m;

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		*(*(matrix + i) + j) = rand() % 10 - 5;
	//		cout << setw(4) << *(*(matrix + i) + j);
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		if (*(*(matrix + i) + j) < 0 && *(*(matrix + i) + j) % 2 != 0 && abs(*(*(matrix + i) + j)) < i)
	//		{
	//			sum += *(*(matrix + i) + j);
	//			mul *= *(*(matrix + i) + j);
	//		}
	//	}
	//}

	//cout << "����� " << sum << endl;
	//cout << "������������ " << mul << endl;



	cout << "������� 14 (������)" << endl;

	int s, M;
	int matrixA[MAX_SIZE][MAX_SIZE] = {};
	cout << "������� ������� �������..."; cin >> s;
	cout << "������� ����� �������.."; cin >> M;
	for (int i = 0; i < s; i++)
	{
		for (int n = 0; n < s; n++)
		{
			matrixA[i][n] = rand() % 10;
			cout << matrixA[i][n] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < s * s; ++i) {
		if (M - 1 == i) continue;
		swap(matrixA[M - 1][i], matrixA[i][M - 1]);
	}

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}


	//cout << "������� 14 (���������)" << endl;

	//int s, M;
	//int matrixA[MAX_SIZE][MAX_SIZE] = {};
	//cout << "������� ������� �������..."; cin >> s;
	//cout << "������� ����� �������.."; cin >> M;
	//for (int i = 0; i < s; i++)
	//{
	//	for (int n = 0; n < s; n++)
	//	{
	//		*(*(matrixA + i) + n) = rand() % 10;
	//		cout << *(*(matrixA + i) + n) << " ";
	//	}
	//	cout << endl;
	//}

	//cout << endl;

	//for (int i = 0; i < s * s; ++i) {
	//	if (M - 1 == i) continue;
	//	swap(*(*(matrixA + M - 1) + i), *(*(matrixA + i) + M - 1));
	//}

	//for (int i = 0; i < s; i++)
	//{
	//	for (int j = 0; j < s; j++)
	//	{
	//		cout << *(*(matrixA + i) + j) << " ";
	//	}
	//	cout << endl;
	//}
}
