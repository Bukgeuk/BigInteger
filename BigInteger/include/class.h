#pragma once

#include <iostream>
#include <string>

namespace BigInt
{
	class BigInt
	{
	public:
		BigInt();
		BigInt(std::string Val);
		BigInt(long long Val);
		BigInt(int Val);
		BigInt(BigInt& Ref);
		void operator=(BigInt& Ref);
		void operator=(std::string Val);
		void operator=(long long Val);
		void operator=(int Val);
		int compare(BigInt& Target);
		int compare(std::string Target);
		int compare(long long Target);
		int compare(int Target);
	private:
		bool plus;
		long long length;
		std::string value;
	};
}