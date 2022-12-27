#include <iostream>
#include <iomanip>

using namespace std;

int* find_max(int* arr, int size)
{
	int* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
		}
	}

	return max;
}
int* find_min(int* arr, int size)
{
	int* min = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
		}
	}
	return min;
}
int check(int** matrix, int row, int element)			//�������� ������� �� ������� � �������������� ����������
{
	int counter = 0, flag = 0, tmp;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (*(*(matrix + j) + i) > 0)
			{
				counter++;
			}
			if (counter == element)
			{
				tmp = i + 1;
				flag++;
				break;
			}
		}
		if (flag != 0)
		{
			break;
		}
		counter = 0;
	}

	if (flag != 0)
	{
		return tmp;
	}
	else
	{
		return -1;
	}
}
void replace(int** matrix, int row, int element, int check_result)		//�������� ����� �������
{
	int counter = 0;
	if (check_result != -1)
	{
		check_result -= 2;
		if (check_result >= 0)
		{
			while (counter < row)
			{
				*(*(matrix + counter) + check_result) *= (-1);
				counter++;
			}
		}
		else
		{
			cout << "��� ����������� �������, ������� �� ��������" << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "������� 14.1" << endl;

	cout << "������� ������ �������" << endl;

	int size;
	cin >> size;
	int* arr = new int[size];

	cout << "������" << endl;
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20 - 5;
		cout << *(arr + i) << " ";
	}

	int max = *find_max(arr, size);
	int min = *find_min(arr, size);
	int result = max - min;

	cout << endl << "�������� " << *find_max(arr, size) << endl;
	cout << "������� " << *find_min(arr, size) << endl;
	cout << "�������� " << result << endl;

	srand(time(NULL));

	cout << "������� 14.2" << endl;

	cout << "������� ���������� �����, ����� ��������" << endl;

	int row, element;
	cin >> row >> element;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		*(matrix + i) = new int[element];
		for (int j = 0; j < element; j++)
		{
			*(*(matrix + i) + j) = rand() % 20 - 5;
			cout << setw(4) << *(*(matrix + i) + j);
		}
		cout << endl;
	}

	int check_result = check(matrix, row, element);
	if (check_result != -1)
	{
		cout << "����� ������� � �������������� ���������� " << check_result << endl;

		replace(matrix, row, element, check_result);

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << *(*(matrix + i) + j);
			}
			cout << endl;
		}
	}
	else
	{
		cout << "��� ������� � �������������� ����������, ������� �� ��������" << endl;
	}
}