#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	cout << "������� 12.1" << endl;

	int number;

	cout << "������� ����� ";
	cin >> number;

	cout << "\t�������� ��� " << endl << bitset<32>(number) << endl;

	bitset<32> bits(number);
	
	bits[3] = ~bits[3];
	bits[4] = ~bits[4];
	bits[5] = ~bits[5];
	bits[6] = ~bits[6];
	bits[7] = ~bits[7];

	cout << "\t�������� � 4 �� 8 ��� " << endl << bits << endl;



	cout << "������� 12.2" << endl;

	int numberA, numberB;

	cout << "������� ����� A, ����� B " << endl;
	cin >> numberA;
	cin >> numberB;

	cout << "\t�������� ��� ����� A " << endl << bitset<32>(numberA) << endl;
	cout << "\t�������� ��� ����� B " << endl << bitset<32>(numberB) << endl;

	int position, numberOfBits, positionQ;

	cout << "������� ������� P, ����� ���������� ����� N " << endl;
	cin >> position;
	cin >> numberOfBits;

	bitset<32> bitsA(numberA);
	bitset<32> bitsB(numberB);

	cout << "������� ������� Q " << endl;
	cin >> positionQ;

	position -= 2;
	positionQ -= 2;


	for (int i = 0; i < numberOfBits; i++)
	{
		bitsB[positionQ] = bitsA[position];
		bitsA.set(position, 0);

		position--;
		positionQ--;
	}

	cout << "A = " << bitsA << endl;

	cout << "B = " << bitsB << endl;




	cout << "\t������� 13.1" << endl;

	int numA, numB;

	cout << "������� ����� A, ����� B " << endl;
	cin >> numA;
	cin >> numB;

	cout << "\t�������� ��� ����� A " << endl << bitset<32>(numA) << endl;
	cout << "\t�������� ��� ����� B " << endl << bitset<32>(numB) << endl;

	bitset<32> bitsNumA(numA);
	bitset<32> bitsNumB(numB);

	bitsNumB[4] = bitsNumA[4];
	bitsNumB[5] = bitsNumA[5];

	cout << "������ ���� ����� (������� � 5) ����� B �� ���� A " << endl << bitsNumB << endl;




	cout << "\t������� 13.2" << endl;

	int positionP, numberOfBits_N;

	cout << "������� ������� P, ����� ���������� ����� N " << endl;
	cin >> positionP;
	cin >> numberOfBits_N;

	positionP -= 2;

	for (int i = 0; i < numberOfBits_N; i++)
	{
		bitsNumA.set(positionP, 1);
		positionP--;
	}

	cout << "A = " << bitsNumA;
}