#include "Headers/Validation.hpp"
#include "Headers/Exception.hpp"


void CheckZero(int value)
{
	if (value == 0)
	{
		throw DivideByZeroException();
	}
};