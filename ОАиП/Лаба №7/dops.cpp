#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));


	//���.1


	cout << "���. 1" << endl;

	int n = 0, d = 0;
	cout << "������� ���-�� ����� � ������������������ ";
	cin >> n;

	int* arr = new int[n];	//��������� ������ ��� ������������ ������

	for (int i = 0; i < n; i++)		//���������� ������������� �������
	{
		arr[i] = rand();
	}

	for (int i = 0; i < n; i++)		//����� ������������� ������� � �������
	{
		cout << arr[i] << endl;
	}

	for (int i = 0; i < n; i++)		//�������� ������� �������
	{
		if (arr[i] % 2 == 0)
		{
			d += arr[i];
		}
	}

	cout << "����� = " << d << endl;		//����� �����

	delete[] arr;					//������������ ������


	//���.2


	cout << "���. 2" << endl;

	int n_1 = 0;
	cout << "������� ���-�� ����� � ������������������ ";
	cin >> n_1;

	int* arr_1 = new int[n_1];			//��������� ������ ��� ������������ ������

	for (int i = 0; i < n_1; i++)		//���������� ������������� �������
	{
		arr_1[i] = rand() - 10000;
	}

	for (int i = 0; i < n_1; i++)		//����� ������������� ������� � �������
	{
		cout << arr_1[i] << endl;
	}

	for (int i = 0; i < n_1; i++)		//�������� ������� �������
	{
		if (arr_1[i] < 0)
		{
			cout << "����� ������� �������������� ����� = " << i + 1 << endl;
			break;
		}
	}

	delete[] arr_1;					//������������ ������


	//���.6


	cout << "���.6" << endl;


	int n_2 = 0, sum = 0, umn = 1;
	cout << "������� ���-�� ����� � ������������������ ";
	cin >> n_2;

	int* arr_2 = new int[n_2];			//��������� ������ ��� ������������ ������

	for (int i = 0; i < n_2; i++)
	{
		arr_2[i] = rand() - 10000;		//���������� �������
	}

	for (int i = 0; i < n_2; i++)		//����� ������� � �������
	{
		cout << arr_2[i] << endl;
	}

	for (int i = 0; i < n_2; i++)		//�������� �������
	{
		if (arr_2[i] > 0)
		{
			sum += arr_2[i];
		}

		if (arr_2[i] < 0)
		{
			umn *= arr_2[i];
		}
	}

	cout << "����� = " << sum << endl;
	cout << "������������ ������������� = " << umn << endl;

	delete[] arr_2;

}