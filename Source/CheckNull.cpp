#include <iostream>
#include "validation.hpp"
#include "Exception.hpp"


/// <summary>
/// ��������� <paramref name="value"/> �� �������.
/// </summary>
/// <param name="value">��������.</param>
void CheckNull(int value)
{
	if (value == NULL)
	{
		throw ArgumentNullException();
	}
};