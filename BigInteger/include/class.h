#pragma once

#include <iostream>
#include <string>

namespace BigInteger
{
	class BigInt
	{
	public:
		BigInt();
		BigInt(std::string Val);
		BigInt(long long Val);
		BigInt(int Val);
		BigInt(const BigInt& Ref);
		BigInt& operator=(const BigInt& Ref);
		BigInt& operator=(std::string Val);
		BigInt& operator=(long long Val);
		BigInt& operator=(int Val);
		int compare(BigInt& Target);
		BigInt add(BigInt& Target);
		BigInt sub(BigInt& Target);
		long long length();
		std::string data();
		void reverse();
		void set_sign(bool plus);
	private:
		bool _plus;
		long long _length;
		std::string _value;
	};
}