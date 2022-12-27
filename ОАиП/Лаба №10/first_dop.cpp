#include <iostream>
#include <bitset>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	cout << "������� 1.1" << endl;

	int number, counter = 0;

	cout << "������� ����� ";
	cin >> number;

	bitset<16> bits(number);

	cout << "\t����� � �������� ����" << endl << bits << endl;

	for (int i = 2; i <= 12; i++)
	{
		if (bits[i] == 0)
		{
			counter++;
		}
	}

	cout << "���������� ����� = " << counter << endl;



	cout << "������� 1.2" << endl;

	int numberA, numberB;

	cout << "������� ����� A, ����� B " << endl;
	cin >> numberA;
	cin >> numberB;

	bitset<16> bitsA(numberA);
	bitset<16> bitsB(numberB);

	cout << "\t�������� ��� ����� A " << endl << bitsA << endl;
	cout << "\t�������� ��� ����� B " << endl << bitsB << endl;

	int position, numberOfBits, positionQ;

	cout << "������� ������� P ��� ����� A ";
	cin >> position;
	cout << "������� ������� Q ��� ����� B ";
	cin >> positionQ;
	cout << "������� ���������� ����� N ";	//���������� ����� ������ ���� ����������
	cin >> numberOfBits;

	position -= 2;
	positionQ -= 2;


	for (int i = 0; i < numberOfBits; i++)
	{
		bitsB[positionQ] = bitsA[position];		//������ ����� B �� A
		bitsA[position] = ~bitsA[position];		//�������� ����� A	

		position--;
		positionQ--;
	}

	cout << "A = " << bitsA << endl;

	cout << "B = " << bitsB << endl;
}