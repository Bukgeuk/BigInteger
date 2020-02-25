#include "operator.h"

bool BigInteger::operator==(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 0);
}

bool BigInteger::operator==(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) == 0);
}

bool BigInteger::operator==(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) == 0);
}

bool BigInteger::operator==(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) == 0);
}

bool BigInteger::operator==(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 0);
}

bool BigInteger::operator==(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 0);
}

bool BigInteger::operator==(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 0);
}










bool BigInteger::operator!=(BigInt& A, BigInt& B)
{
	return (A.compare(B) != 0);
}

bool BigInteger::operator!=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) != 0);
}

bool BigInteger::operator!=(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) != 0);
}

bool BigInteger::operator!=(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) != 0);
}

bool BigInteger::operator!=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 0);
}

bool BigInteger::operator!=(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 0);
}

bool BigInteger::operator!=(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 0);
}










bool BigInteger::operator>(BigInt& A, BigInt& B)
{
	return (A.compare(B) == 1);
}

bool BigInteger::operator>(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) == 1);
}

bool BigInteger::operator>(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) == 1);
}

bool BigInteger::operator>(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) == 1);
}

bool BigInteger::operator>(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 1);
}

bool BigInteger::operator>(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 1);
}

bool BigInteger::operator>(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == 1);
}










bool BigInteger::operator<(BigInt& A, BigInt& B)
{
	return (A.compare(B) == -1);
}

bool BigInteger::operator<(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) == -1);
}
bool BigInteger::operator<(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) == -1);
}

bool BigInteger::operator<(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) == -1);
}

bool BigInteger::operator<(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == -1);
}

bool BigInteger::operator<(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == -1);
}

bool BigInteger::operator<(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) == -1);
}










bool BigInteger::operator>=(BigInt& A, BigInt& B)
{
	return (A.compare(B) != -1);
}

bool BigInteger::operator>=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) != -1);
}

bool BigInteger::operator>=(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) != -1);
}

bool BigInteger::operator>=(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) != -1);
}

bool BigInteger::operator>=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != -1);
}

bool BigInteger::operator>=(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != -1);
}

bool BigInteger::operator>=(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != -1);
}










bool BigInteger::operator<=(BigInt& A, BigInt& B)
{
	return (A.compare(B) != 1);
}

bool BigInteger::operator<=(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.compare(temp) != 1);
}
bool BigInteger::operator<=(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.compare(temp) != 1);
}

bool BigInteger::operator<=(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.compare(temp) != 1);
}

bool BigInteger::operator<=(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 1);
}

bool BigInteger::operator<=(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 1);
}

bool BigInteger::operator<=(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.compare(B) != 1);
}










BigInteger::BigInt BigInteger::operator+(BigInt A, BigInt B)
{
	return (A.add(B));
}

BigInteger::BigInt BigInteger::operator+(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.add(temp));
}

BigInteger::BigInt BigInteger::operator+(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.add(temp));
}

BigInteger::BigInt BigInteger::operator+(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.add(temp));
}

BigInteger::BigInt BigInteger::operator+(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.add(B));
}

BigInteger::BigInt BigInteger::operator+(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.add(B));
}

BigInteger::BigInt BigInteger::operator+(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.add(B));
}










BigInteger::BigInt BigInteger::operator-(BigInt A, BigInt B)
{
	return (A.sub(B));
}

BigInteger::BigInt BigInteger::operator-(BigInt& A, std::string B)
{
	BigInt temp(B);
	return (A.sub(temp));
}

BigInteger::BigInt BigInteger::operator-(BigInt& A, long long B)
{
	BigInt temp(B);
	return (A.sub(temp));
}

BigInteger::BigInt BigInteger::operator-(BigInt& A, int B)
{
	BigInt temp(B);
	return (A.sub(temp));
}

BigInteger::BigInt BigInteger::operator-(std::string A, BigInt& B)
{
	BigInt temp(A);
	return (temp.sub(B));
}

BigInteger::BigInt BigInteger::operator-(long long A, BigInt& B)
{
	BigInt temp(A);
	return (temp.sub(B));
}

BigInteger::BigInt BigInteger::operator-(int A, BigInt& B)
{
	BigInt temp(A);
	return (temp.sub(B));
}