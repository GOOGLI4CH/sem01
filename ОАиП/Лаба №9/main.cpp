#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	cout << "������� 9" << endl;

	int const MAX_SIZE = 99;
	int arr[MAX_SIZE] = {}, n;

	cout << "������� ������ ������� (�� ����� 99) ";
	cin >> n;

	for (int i = 0; i < n; i++)		//���������� � ����� �������
	{
		arr[i] = rand() % 99;
		cout << arr[i] << endl;
	}

	int min = arr[0];

	for (int i = 0; i < n; i++) //����� ��������
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� �������� = " << min << endl;

	for (int i = 0; i < n; i++) //������ ������ ��������� �� ����������� ��������
	{
		if (i % 2 != 0)
		{
			arr[i] = min;
		}

		cout << arr[i] << endl;
	}

	cout << "������� 14" << endl;

	const int SIZE = 20;
	int zero[SIZE] = {}, first_zero, last_zero, k = 0;

	for (int i = 0; i < SIZE; i++)
	{
		zero[i] = rand() % 2;
		cout << zero[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (zero[i] == 0)
		{
			k++;
			last_zero = i + 1;

			if (k == 1)
			{
				first_zero = i + 1;
			}
		}
	}
	cout << "First zero = " << first_zero << endl;
	cout << "Last zero = " << last_zero << endl;
}