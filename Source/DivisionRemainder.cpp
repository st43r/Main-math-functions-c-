#include "Validation.hpp"
#include "Main.hpp"

/// <summary>
/// Получает математический остаток от деления.
/// </summary>
/// <param name="number">Делимое.</param>
/// <param name="divider">Делитель.</param>
/// <returns>Целое число.</returns>
uint DivisionRemainder(int number, int divider)
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
