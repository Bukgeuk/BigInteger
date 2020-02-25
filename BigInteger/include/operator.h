#pragma once

#include <iostream>
#include <string>
#include "class.h"

namespace BigInteger
{
	bool operator==(BigInt& A, BigInt& B);
	bool operator==(BigInt& A, std::string B);
	bool operator==(BigInt& A, long long B);
	bool operator==(BigInt& A, int B);
	bool operator==(std::string A, BigInt& B);
	bool operator==(long long A, BigInt& B);
	bool operator==(int A, BigInt& B);

	bool operator!=(BigInt& A, BigInt& B);
	bool operator!=(BigInt& A, std::string B);
	bool operator!=(BigInt& A, long long B);
	bool operator!=(BigInt& A, int B);
	bool operator!=(std::string A, BigInt& B);
	bool operator!=(long long A, BigInt& B);
	bool operator!=(int A, BigInt& B);

	bool operator>(BigInt& A, BigInt& B);
	bool operator>(BigInt& A, std::string B);
	bool operator>(BigInt& A, long long B);
	bool operator>(BigInt& A, int B);
	bool operator>(std::string A, BigInt& B);
	bool operator>(long long A, BigInt& B);
	bool operator>(int A, BigInt& B);

	bool operator<(BigInt& A, BigInt& B);
	bool operator<(BigInt& A, std::string B);
	bool operator<(BigInt& A, long long B);
	bool operator<(BigInt& A, int B);
	bool operator<(std::string A, BigInt& B);
	bool operator<(long long A, BigInt& B);
	bool operator<(int A, BigInt& B);

	bool operator>=(BigInt& A, BigInt& B);
	bool operator>=(BigInt& A, std::string B);
	bool operator>=(BigInt& A, long long B);
	bool operator>=(BigInt& A, int B);
	bool operator>=(std::string A, BigInt& B);
	bool operator>=(long long A, BigInt& B);
	bool operator>=(int A, BigInt& B);

	bool operator<=(BigInt& A, BigInt& B);
	bool operator<=(BigInt& A, std::string B);
	bool operator<=(BigInt& A, long long B);
	bool operator<=(BigInt& A, int B);
	bool operator<=(std::string A, BigInt& B);
	bool operator<=(long long A, BigInt& B);
	bool operator<=(int A, BigInt& B);

	BigInt operator+(BigInt A, BigInt B);
	BigInt operator+(BigInt& A, std::string B);
	BigInt operator+(BigInt& A, long long B);
	BigInt operator+(BigInt& A, int B);
	BigInt operator+(std::string A, BigInt& B);
	BigInt operator+(long long A, BigInt& B);
	BigInt operator+(int A, BigInt& B);

	BigInt operator-(BigInt A, BigInt B);
	BigInt operator-(BigInt& A, std::string B);
	BigInt operator-(BigInt& A, long long B);
	BigInt operator-(BigInt& A, int B);
	BigInt operator-(std::string A, BigInt& B);
	BigInt operator-(long long A, BigInt& B);
	BigInt operator-(int A, BigInt& B);
}
