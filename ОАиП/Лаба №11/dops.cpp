#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	const int MAX_SIZE = 100;

	cout << "������� 7" << endl;

	int arrayA[MAX_SIZE] = {}, n, k;
	int* pArrayA = arrayA;

	cout << "������� ������ ������� A (�� ����� 100) ";
	cin >> n;
	cout << "������� ����� K ";
	cin >> k;

	cout << "\t������ A" << endl;
	for (int a = 0; a < n; a++)
	{
		*(pArrayA + a) = rand() % 10;
		cout << a + 1 << ". " << *(pArrayA + a) << "\t";
	}

	cout << endl << "\t������ ��������� ������ K" << endl;
	for (int a = 0; a < n; a++)
	{
		if (*(pArrayA + a) == k)
		{
			cout << a + 1 << " ";
		}
	}

	cout << endl << "\t������ ��������� ������ K" << endl;
	for (int a = 0; a < n; a++)
	{
		if (*(pArrayA + a) > k)
		{
			cout << a + 1 << " ";
		}
	}

	cout << endl << "\t������ ��������� ������ K" << endl;
	for (int a = 0; a < n; a++)
	{
		if (*(pArrayA + a) < k)
		{
			cout << a + 1 << " ";
		}
	}



	//cout << endl << "������� 10" << endl;

	//int array1[10] = {}, array2[10] = {};

	//int* pArray1 = array1;
	//int* pArray2 = array2;

	//cout << "\t������ ������" << endl;
	//for (int a = 0; a < 10; a++)
	//{
	//	*(pArray1 + a) = rand() % 10;
	//	cout << *(pArray1 + a) << " ";
	//}

	//cout << endl << "\t������ ������" << endl;
	//for (int a = 0; a < 10; a++)
	//{
	//	*(pArray2 + a) = rand() % 10;
	//	cout << *(pArray2 + a) << " ";
	//}

	//int min = *pArray1;

	//for (int a = 0; a < 10; a++)
	//{
	//	if (*(pArray1 + a) < min)
	//	{
	//		min =  *(pArray1+a);
	//	}
	//}
	//cout << endl << min;


	cout << endl << "������� 14" << endl;

	int arrayX[MAX_SIZE] = {}, arrayY[MAX_SIZE] = {}, i, j, counter = 0;

	cout << "������� ������ ������� X (�� ����� 100) ";
	cin >> i;
	cout << "������� ������ ������� Y (�� ����� 100) ";
	cin >> j;

	cout << "\t������ X" << endl;
	for (int a = 0; a < i; a++)
	{
		arrayX[a] = rand() % 10;
		cout << arrayX[a] << " ";
	}

	cout << endl << "\t������ Y" << endl;
	for (int a = 0; a < j; a++)
	{
		arrayY[a] = rand() % 10;
		cout << arrayY[a] << " ";
	}

	for (int a = 0; a < i; a++)
	{
		for (int p = 0; p < j; p++)
		{
			if (arrayX[a] == arrayY[p])
			{
				counter++;
			}
		}
	}

	cout << endl << "���������� ���������� ���: " << counter << endl;



	cout << "������� 15" << endl;

	int arr[MAX_SIZE] = {};
	int* pointer = arr;

	int size;
	cout << "������� ������ ������� A ";
	cin >> size;


	cout << "\t������ A" << endl;
	for (int p = 0; p < size; p++)
	{
		arr[p] = rand() % 10 - 5;

		if (arr[p] == 0)
		{
			arr[p] += 1;
		}

		cout << arr[p] << " ";
	}


	cout << endl << "��������������� ������ A" << endl;
	for (int p = 0; p < size; p++)
	{
		if (arr[p] > 0)
		{
			*(pointer + p) = arr[p];
			cout << *(pointer + p) << " ";
		}
	}

	for (int p = 0; p < size; p++)
	{
		if (arr[p] < 0)
		{
			*(pointer + p) = arr[p];
			cout << *(pointer + p) << " ";
		}
	}
}