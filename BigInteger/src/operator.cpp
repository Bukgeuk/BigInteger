#include "operator.h"

bool BigInteger::operator==(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 0);
}

bool BigInteger::operator==(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInteger::operator==(BigInt& A, long long B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInteger::operator==(BigInt& A, int B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInteger::operator==(std::string A, BigInt& B)
{
	return B == A;
}

bool BigInteger::operator==(long long A, BigInt& B)
{
	return B == A;
}

bool BigInteger::operator==(int A, BigInt& B)
{
	return B == A;
}










bool BigInteger::operator!=(BigInt& A, BigInt& B)
{
	return !(A == B);
}

bool BigInteger::operator!=(BigInt& A, std::string B)
{
	return !(A == B);
}

bool BigInteger::operator!=(BigInt& A, long long B)
{
	return !(A == B);
}

bool BigInteger::operator!=(BigInt& A, int B)
{
	return !(A == B);
}

bool BigInteger::operator!=(std::string A, BigInt& B)
{
	return !(A == B);
}

bool BigInteger::operator!=(long long A, BigInt& B)
{
	return !(A == B);
}

bool BigInteger::operator!=(int A, BigInt& B)
{
	return !(A == B);
}










bool BigInteger::operator>(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 1);
}

bool BigInteger::operator>(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInteger::operator>(BigInt& A, long long B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInteger::operator>(BigInt& A, int B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInteger::operator>(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}

bool BigInteger::operator>(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}

bool BigInteger::operator>(int A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}










bool BigInteger::operator<(BigInt& A, BigInt& B)
{
	return (A.compare(B) == -1);
}

bool BigInteger::operator<(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A < temp;
}
bool BigInteger::operator<(BigInt& A, long long B)
{
	BigInt temp(B);
	return A < temp;
}

bool BigInteger::operator<(BigInt& A, int B)
{
	BigInt temp(B);
	return A < temp;
}

bool BigInteger::operator<(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}

bool BigInteger::operator<(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}

bool BigInteger::operator<(int A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}










bool BigInteger::operator>=(BigInt& A, BigInt& B)
{
	return (A.compare(B) != -1);
}

bool BigInteger::operator>=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInteger::operator>=(BigInt& A, long long B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInteger::operator>=(BigInt& A, int B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInteger::operator>=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}

bool BigInteger::operator>=(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}

bool BigInteger::operator>=(int A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}










bool BigInteger::operator<=(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 1);
}

bool BigInteger::operator<=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A <= temp;
}
bool BigInteger::operator<=(BigInt& A, long long B)
{
	BigInt temp(B);
	return A <= temp;
}

bool BigInteger::operator<=(BigInt& A, int B)
{
	BigInt temp(B);
	return A <= temp;
}

bool BigInteger::operator<=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}

bool BigInteger::operator<=(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}

bool BigInteger::operator<=(int A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}