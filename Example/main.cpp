#include <iostream>
#include <BigInteger.h>

using namespace std;
using namespace BigInteger;

int main()
{
	BigInt A;
	BigInt B;

	A = 5;
	B = 6;
	cout << (A + B).data() << endl; // 11

	A = "-5";
	B = "-6";
	cout << (A + B).data() << endl; // -11

	A = 5;
	B = 6;
	cout << (A - B).data() << endl; // -1

	A = "-5";
	B = 6;
	cout << (A + B).data() << endl; // 1

	A = 5;
	B = "-6";
	cout << (A + B).data() << endl; // -1

	A = "-5";
	B = "-6";
	cout << (A - B).data() << endl; // 1

	A = 5;
	B = "-6";
	cout << (A - B).data() << endl; // 11

	A = "-5";
	B = 6;
	cout << (A - B).data() << endl; // -11

	return 0;
}