#include "Validation.hpp"

/// <summary>
/// �������� �������������� ������� �� �������.
/// </summary>
/// <param name="number">�������.</param>
/// <param name="divider">��������.</param>
/// <returns>����� �����.</returns>
unsigned int DivisionRemainder(int number, int divider)
{
	CheckNull(number);
	CheckNull(divider);

	if (number - number / divider * divider >= 0)
	{
		return number - number / divider * divider;
	}

	if ((number - number / divider * divider < 0) && (number / divider < 0))
	{
		return number - (number / divider - 1) * divider;
	}

	if ((number - number / divider * divider < 0) && (number / divider > 0))
	{
		return number - (number / divider + 1) * divider;
	}

}