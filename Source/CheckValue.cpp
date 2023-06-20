#include "Headers/Validation.hpp"

#include <string>
#include <stdexcept>


void CheckValue(int value, int minValue, int maxValue)
{
	if (value < minValue || value > maxValue)
	{
		throw std::out_of_range("�������� ������ ���� � ��������� ����� " + std::to_string(minValue) + " - " + std::to_string(maxValue));
	}
};