#include <iostream>
#include "getSum.h"
#include "getMul.h"


using namespace std;

int main(int argc, char*[]) {

	int parm1 = 5;

	for (int i = 0; i < 5; i++)
	{
		int parm2 = parm1 + i;
		int result_getSum = getSum(parm1, parm2);
		cout << "i = " << i;
		cout << " getSum(" << parm1 << "," << parm2 << ") = " << result_getSum << endl;
	}

	int result_getMul = getMul(2, 3);
	cout << result_getMul << endl;

	return 0;
}