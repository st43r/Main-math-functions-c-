#include <limits>
#include <exception>

#include "Headers/Validation.hpp"
#include "Headers/MathFunctions.hpp"


uint DivisionRemainder(int number, int divider)
{
	CheckValue(number, std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
	CheckZero(divider);

	return number >= 0
		? number % divider
		: number % divider + std::abs(divider);
}