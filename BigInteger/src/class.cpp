#include "class.h"

BigInt::BigInt::BigInt()
{
	plus = true;
	value = "0";
	length = value.length();
}

BigInt::BigInt::BigInt(std::string Val)
{
	if (Val[0] == '-')
	{
		plus = false;
		value = Val.substr(1);
	}
	else
	{
		plus = true;
		if (Val[0] == '+')
			value = Val.substr(1);
		else
			value = Val;
	}

	length = value.length();
}

BigInt::BigInt::BigInt(long long Val)
{
	if (Val < 0)
	{
		plus = true;
		value = std::to_string(Val * -1);
	}
	else
	{
		plus = true;
		value = std::to_string(Val);
	}

	length = value.length();
}

BigInt::BigInt::BigInt(int Val)
{
	if (Val < 0)
	{
		plus = true;
		value = std::to_string(Val * -1);
	}
	else
	{
		plus = true;
		value = std::to_string(Val);
	}

	length = value.length();
}

BigInt::BigInt::BigInt(BigInt& Ref)
{
	plus = Ref.plus;
	length = Ref.length;
	value = Ref.value;
}

void BigInt::BigInt::operator=(BigInt& Ref)
{
	this->length = Ref.length;
	this->plus = Ref.plus;
	this->value = Ref.value;
}

void BigInt::BigInt::operator=(std::string Val)
{
	if (Val[0] == '-')
	{
		plus = false;
		value = Val.substr(1);
	}
	else
	{
		plus = true;
		if (Val[0] == '+')
			value = Val.substr(1);
		else
			value = Val;
	}

	length = value.length();
}

void BigInt::BigInt::operator=(long long Val)
{
	if (Val < 0)
	{
		plus = true;
		value = std::to_string(Val * -1);
	}
	else
	{
		plus = true;
		value = std::to_string(Val);
	}

	length = value.length();
}

void BigInt::BigInt::operator=(int Val)
{
	if (Val < 0)
	{
		plus = true;
		value = std::to_string(Val * -1);
	}
	else
	{
		plus = true;
		value = std::to_string(Val);
	}

	length = value.length();
}

int BigInt::BigInt::compare(BigInt& Target)
{
	if (this->plus == Target.plus && this->value == Target.value)
		return 0;
	else if ((this->plus && !Target.plus) || (this->length > Target.length))
		return 1;
	else if ((!this->plus && !Target.plus) || (this->length < Target.length))
		return -1;

	for (int i = 0; i < this->length; i++) // this->length == Target.length
	{
		if (this->value[i] > Target.value[i])
			return 1;
		else if (this->value[i] < Target.value[i])
			return -1;
	}

	return 0;
}

int BigInt::BigInt::compare(std::string Target)
{
	BigInt temp(Target);
	return compare(temp);
}

int BigInt::BigInt::compare(long long Target)
{
	BigInt temp(Target);
	return compare(temp);
}

int BigInt::BigInt::compare(int Target)
{
	BigInt temp(Target);
	return compare(temp);
}