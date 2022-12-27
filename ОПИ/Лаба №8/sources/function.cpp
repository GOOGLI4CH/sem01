#include <iostream>
#include "getSum.h"
#include "getMul.h"

using namespace std;

int getSum(int x, int y)
{
	return x + y;
}


int getMul(int x, int y)
{
	cout << "getMul(" << x << "," << y << ") = ";

	return x * y;
}