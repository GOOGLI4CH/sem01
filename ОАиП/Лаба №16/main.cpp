#include <iostream>
#include <iomanip>

using namespace std;

int& counter_minus(int* arr, int size)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 && *(arr + i) < 0)
		{
			counter++;
		}
	}

	return counter;
}

int& check_matrix(int** matrix, int row, int element)			/*������� ������������ ����� ������ � ������������� ��������
																��� ������ ���� ����� � ������������� ��������� ������ ����������� � flag*/
{
	int buf = -1, flag = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (*(*(matrix + i) + j) < 0)
			{
				buf = i;
				flag++;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}

	return buf;
}

void column(int** matrix, int row, int element, int result)			//������� ���������� �������� ��������� ������� � ��� ����, ������� ����� ����� ������ � ������������� ���������
{
	int counter = 0;

	while (counter < row)
	{
		*(*(matrix + counter) + result) = *(*(matrix + counter) + result) / 2;	//��� ������� ����������� � ������� ������� (��������� = ������� ��� ������)
		counter++;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	cout << "������� 12.1" << endl;

	int size;

	cout << "������� ������ ������� " << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i) << " ";
	}
	int num_minus = counter_minus(arr, size);
	cout << endl << "���-�� ������������� ��������� ������� �� ������ ������ " << num_minus << endl;


	cout << "������� 12.2" << endl;

	int row, element;

	cout << "������� ���������� �����, ����� ��������" << endl;
	cin >> row >> element;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		*(matrix + i) = new int[element];
		for (int j = 0; j < element; j++)
		{
			*(*(matrix + i) + j) = rand() % 20 - 10;
			cout << setw(4) << *(*(matrix + i) + j);
		}
		cout << endl;
	}

	int result = check_matrix(matrix, row, element);

	if (result < 0)
	{
		cout << "��� ����� ������" << endl;
	}
	else
	{
		cout << "����� ������ ������, ������� �������� ������������� ������� " << result + 1 << endl;
		cout << "��������� �������" << endl;

		column(matrix, row, element, result);

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << *(*(matrix + i) + j);
			}
			cout << endl;
		}
	}
}