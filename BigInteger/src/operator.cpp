#include "operator.h"

bool BigInt::operator==(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 0);
}

bool BigInt::operator==(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInt::operator==(BigInt& A, long long B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInt::operator==(BigInt& A, int B)
{
	BigInt temp(B);
	return A == temp;
}

bool BigInt::operator==(std::string A, BigInt& B)
{
	return B == A;
}

bool BigInt::operator==(long long A, BigInt& B)
{
	return B == A;
}

bool BigInt::operator==(int A, BigInt& B)
{
	return B == A;
}










bool BigInt::operator!=(BigInt& A, BigInt& B)
{
	return !(A == B);
}

bool BigInt::operator!=(BigInt& A, std::string B)
{
	return !(A == B);
}

bool BigInt::operator!=(BigInt& A, long long B)
{
	return !(A == B);
}

bool BigInt::operator!=(BigInt& A, int B)
{
	return !(A == B);
}

bool BigInt::operator!=(std::string A, BigInt& B)
{
	return !(A == B);
}

bool BigInt::operator!=(long long A, BigInt& B)
{
	return !(A == B);
}

bool BigInt::operator!=(int A, BigInt& B)
{
	return !(A == B);
}










bool BigInt::operator>(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 1);
}

bool BigInt::operator>(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInt::operator>(BigInt& A, long long B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInt::operator>(BigInt& A, int B)
{
	BigInt temp(B);
	return A > temp;
}

bool BigInt::operator>(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}

bool BigInt::operator>(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}

bool BigInt::operator>(int A, BigInt& B)
{
	BigInt temp(A);
	return temp > B;
}










bool BigInt::operator<(BigInt& A, BigInt& B)
{
	return (A.compare(B) == -1);
}

bool BigInt::operator<(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A < temp;
}
bool BigInt::operator<(BigInt& A, long long B)
{
	BigInt temp(B);
	return A < temp;
}

bool BigInt::operator<(BigInt& A, int B)
{
	BigInt temp(B);
	return A < temp;
}

bool BigInt::operator<(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}

bool BigInt::operator<(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}

bool BigInt::operator<(int A, BigInt& B)
{
	BigInt temp(A);
	return temp < B;
}










bool BigInt::operator>=(BigInt& A, BigInt& B)
{
	return (A.compare(B) != -1);
}

bool BigInt::operator>=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInt::operator>=(BigInt& A, long long B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInt::operator>=(BigInt& A, int B)
{
	BigInt temp(B);
	return A >= temp;
}

bool BigInt::operator>=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}

bool BigInt::operator>=(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}

bool BigInt::operator>=(int A, BigInt& B)
{
	BigInt temp(A);
	return temp >= B;
}










bool BigInt::operator<=(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 1);
}

bool BigInt::operator<=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return A <= temp;
}
bool BigInt::operator<=(BigInt& A, long long B)
{
	BigInt temp(B);
	return A <= temp;
}

bool BigInt::operator<=(BigInt& A, int B)
{
	BigInt temp(B);
	return A <= temp;
}

bool BigInt::operator<=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}

bool BigInt::operator<=(long long A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}

bool BigInt::operator<=(int A, BigInt& B)
{
	BigInt temp(A);
	return temp <= B;
}