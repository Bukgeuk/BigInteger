#include "class.h"

BigInteger::BigInt::BigInt()
{
	_plus = true;
	_value = "0";
	_length = _value.length();
}

BigInteger::BigInt::BigInt(std::string Val)
{
	if (Val[0] == '-')
	{
		_plus = false;
		_value = Val.substr(1);
	}
	else
	{
		_plus = true;
		if (Val[0] == '+')
			_value = Val.substr(1);
		else
			_value = Val;
	}

	_length = _value.length();
}

BigInteger::BigInt::BigInt(long long Val)
{
	if (Val < 0)
	{
		_plus = false;
		_value = std::to_string(Val * -1);
	}
	else
	{
		_plus = true;
		_value = std::to_string(Val);
	}

	_length = _value.length();
}

BigInteger::BigInt::BigInt(int Val)
{
	if (Val < 0)
	{
		_plus = false;
		_value = std::to_string(Val * -1);
	}
	else
	{
		_plus = true;
		_value = std::to_string(Val);
	}

	_length = _value.length();
}

BigInteger::BigInt::BigInt(const BigInt& Ref)
{
	_plus = Ref._plus;
	_length = Ref._length;
	_value = Ref._value;
}

BigInteger::BigInt& BigInteger::BigInt::operator=(const BigInt& Ref)
{
	this->_length = Ref._length;
	this->_plus = Ref._plus;
	this->_value = Ref._value;
	return *this;
}

BigInteger::BigInt& BigInteger::BigInt::operator=(std::string Val)
{
	if (Val[0] == '-')
	{
		_plus = false;
		_value = Val.substr(1);
	}
	else
	{
		_plus = true;
		if (Val[0] == '+')
			_value = Val.substr(1);
		else
			_value = Val;
	}

	_length = _value.length();

	return *this;
}

BigInteger::BigInt& BigInteger::BigInt::operator=(long long Val)
{
	if (Val < 0)
	{
		_plus = true;
		_value = std::to_string(Val * -1);
	}
	else
	{
		_plus = true;
		_value = std::to_string(Val);
	}

	_length = _value.length();

	return *this;
}

BigInteger::BigInt& BigInteger::BigInt::operator=(int Val)
{
	if (Val < 0)
	{
		_plus = true;
		_value = std::to_string(Val * -1);
	}
	else
	{
		_plus = true;
		_value = std::to_string(Val);
	}

	_length = _value.length();

	return *this;
}

int BigInteger::BigInt::compare(BigInt& Target)
{
	if (this->_plus == Target._plus && this->_value == Target._value)
		return 0;
	else if ((this->_plus && !Target._plus) || (this->_length > Target._length))
		return 1;
	else if ((!this->_plus && Target._plus) || (this->_length < Target._length))
		return -1;
	else if (!this->_plus && !Target._plus)
	{
		BigInt A(*this);
		A._plus = true;
		BigInt B(Target);
		B._plus = true;
		return B.compare(A);
	}

	for (int i = 0; i < this->_length; i++) // this->_length == Target._length
	{
		if (this->_value[i] > Target._value[i])
			return 1;
		else if (this->_value[i] < Target._value[i])
			return -1;
	}

	return 0;
}

BigInteger::BigInt BigInteger::BigInt::add(BigInt& Target)
{
	BigInt ret;

	if (this->_plus && Target._plus) // (+) + (+)
	{
		if (this->compare(Target) == -1)
		{
			long long pos = this->_length;
			long long min = Target._length - pos;
			long long up = 0, temp;
			std::string res;
			bool no = false;

			if (min == 0)
				no = true;

			while (pos > 0)
			{
				temp = Target._value[pos + min - 1] - '0' + this->_value[pos - 1] - '0' + up;
				up = temp / 10;
				res = (std::to_string((temp % 10)) + res);

				pos--;
			}

			while (min > 0)
			{
				temp = Target._value[min - 1] - '0' + up;
				up = temp / 10;
				res = (std::to_string((temp % 10)) + res);

				min--;
			}

			if (no)
			{
				res = (std::to_string(up) + res);
			}

			ret = res;
		}
		else
		{
			long long pos = Target._length;
			long long min = this->_length - pos;
			int up = 0, temp;
			std::string res;
			bool no = false;

			if (min == 0)
				no = true;

			while (pos > 0)
			{
				temp = this->_value[pos + min - 1] - '0' + Target._value[pos - 1] - '0' + up;
				up = temp / 10;
				res = (std::to_string((temp % 10)) + res);

				pos--;
			}

			while (min > 0)
			{
				temp = this->_value[min - 1] - '0' + up;
				up = temp / 10;
				res = (std::to_string((temp % 10)) + res);

				min--;
			}

			if (no)
			{
				res = (std::to_string(up) + res);
			}

			ret = res;
		}
	}
	else if (!this->_plus && !Target._plus) // (-) + (-)
	{
		BigInt A(*this);
		A._plus = true;
		BigInt B(Target);
		B._plus = true;
		ret = A.add(B);
		ret._plus = false;
	}
	else if (this->_plus && !Target._plus)
	{
		if (this->_value == Target._value)
			ret = 0;

		BigInt A(*this);
		BigInt B(Target);
		B._plus = true;
		ret = A.sub(B);
	}
	else if (!this->_plus && Target._plus)
	{
		if (this->_value == Target._value)
			ret = 0;

		BigInt A(*this);
		A._plus = true;
		BigInt B(Target);

		int com = A.compare(B);

		if (com == 1)
		{
			ret = A.sub(B);
			ret._plus = false;
		}
		else if (com == -1)
		{
			ret = B.sub(A);
		}
	}

	ret._length = ret._value.length();

	return ret;
}

long long BigInteger::BigInt::length()
{
	return this->_length;
}

std::string BigInteger::BigInt::data()
{
	if (!this->_plus)
		return ("-" + this->_value);
	else
		return this->_value;
}

BigInteger::BigInt BigInteger::BigInt::sub(BigInt& Target)
{
	BigInt ret;

	int com = this->compare(Target);

	if (com == 0)
	{
		ret = 0;
	}
	else if (this->_plus && Target._plus) // (+) - (+)
	{	
		if (com == -1)
		{
			long long pos = this->_length;
			long long min = Target._length - pos;
			bool down = false;
			std::string res;

			while (pos > 0)
			{
				res = (std::to_string((Target._value[pos + min - 1] - '0') - (this->_value[pos - 1] - '0') - down) + res);

				if (Target._value[pos + min - 1] - down < this->_value[pos - 1])				
					down = true;
				else
					down = false;

				pos--;
			}

			while (min > 0)
			{
				res = (std::to_string((Target._value[min - 1] - '0') - down) + res);

				down = false;

				min--;
			}

			ret = res;
			ret._plus = false;

		}
		else
		{
			long long pos = Target._length;
			long long min = this->_length - pos;
			bool down = false;
			std::string res;

			while (pos > 0)
			{
				if (this->_value[pos + min - 1] - down < Target._value[pos - 1])
				{
					res = (std::to_string((this->_value[pos + min - 1] - '0' + 10) - (Target._value[pos - 1] - '0') - down) + res);
					down = true;
				}			
				else
				{
					res = (std::to_string((this->_value[pos + min - 1] - '0') - (Target._value[pos - 1] - '0') - down) + res);
					down = false;
				}
					
				pos--;
			}

			while (min > 0)
			{
				res = (std::to_string((this->_value[min - 1] - '0') - down) + res);

				down = false;

				min--;
			}

			ret = res;
		}
	}
	else if (!this->_plus && !Target._plus) // (-) - (-)
	{
		BigInt A(*this);
		BigInt B(Target);
		B._plus = true;
		ret = A.add(B);
	}
	else if (this->_plus && !Target._plus)
	{
		BigInt A(*this);
		BigInt B(Target);
		B._plus = true;
		ret = A.add(B);
	}
	else if (!this->_plus && Target._plus)
	{
		BigInt A(*this);
		A._plus = true;
		BigInt B(Target);
		ret = A.add(B);
		ret._plus = false;
	}


	return ret;
}

void BigInteger::BigInt::reverse()
{
	this->_plus = !this->_plus;
}

void BigInteger::BigInt::set_sign(bool plus)
{
	this->_plus = plus;
}
