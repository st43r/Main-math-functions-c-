#include <iostream>
#include "validation.hpp"
#include "Exception.hpp"


/// <summary>
/// Проверяет <paramref name="value"/> на пустоту.
/// </summary>
/// <param name="value">Значение.</param>
void CheckNull(int value)
{
	if (value == NULL)
	{
		throw ArgumentNullException();
	}
};