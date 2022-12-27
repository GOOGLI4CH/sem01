#include <ctime>
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;
void matrix(int, int, int*, int*);
void strin(int, int, string);

int main()
{

	setlocale(0, "");
	int n = 0;

	int* A, * B, row, colum, i, j, f = 0, number = 0, key;
	string word;

	cout << "������� ����� (1 - ������� 4.1, 2 - ������� 4.2)" << endl;
	cin >> key;
	switch (key) {

	case 1:
		cout << "������� ������� ������� ";
		cin >> row;
		colum = row;
		A = new int[row * colum];
		B = new int[row * colum];
		for (i = 0; i < row; i++) {
			for (j = 0; j < colum; j++)
			{
				cout << "������� " << j + 1 << " ������� " << i + 1 << "-� ������ ";
				cin >> *(A + i * colum + j);
				*(B + i * colum + j) = *(A + i * colum + j);
			}
		}

		matrix(row, colum, A, B);
		break;

	case 2:
		cout << "������� ������ ������ � ������, �� ���� ���������� ���� ";
		cin >> n;
		cout << endl;

		for (i = 0; i < n; i++) {
			cin >> word;
			strin(n, i, word);
		}
		break;

	case 3:
		break;
	}
}

void matrix(int row, int colum, int* A, int* B) {
	int i, j, f = 0, number = 0;
	cout << endl << "�������:" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			cout << *(A + i * colum + j) << " ";

		}
		cout << endl;
	}
	cout << endl << "����� �������:" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			if (i == 0) {
				*(B + i * colum + j) = *(A + i * colum + j) - *(A + (row - 1) * colum + j);
				cout << *(B + i * colum + j) << " ";
			}
			if (i != 0) {
				*(B + i * colum + j) = *(A + i * colum + j) - *(A + (i - 1) * colum + j);
				cout << *(B + i * colum + j) << " ";
			}




		}
		cout << endl;
	}


	delete[] A;

	delete[] B;
}




int sum = 0;

void strin(int n, int i, string word)
{
	// ���, ������� ����������� ��� ������������� ���������� ���� � ����� try
	  // ��������� �� ������ ������� � ������� ����������  e.what();
	try {
		unsigned long int number2 = stoull(word); //����������� ��� ���������� �������, ���� �� ����� ������ ������ �� ���������� ������, ����� ����� ������� ��������, ������� �������� ��� ������������ ����������� ������������� ������ ����� � ����������� �� � ������������� ��������.
		sum += number2;
	}
	catch (invalid_argument& e) { //���� ����� ������ ������� ������� ��� ���� ����������, ����������� ��� ��������� � ������������ ���������. ���������� ��� �������, ������� ����� ����������� ��� ����������. �� �������� �� �������, ����������� ��-�� ����, ��� �������� ��������� �� ���� �������.
		cout << "������ ������������� '" << word << "' � ����� " << e.what() << endl;
	}
	if (i == n - 1)
		cout << "����� �����: " << sum << endl << endl;
}