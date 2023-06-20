#ifndef _validation_hpp_
#define _validation_hpp_


/// <summary>
/// Проверяет <paramref name="value"/> на допустимое.
/// </summary>
/// <param name="value">Значение.</param>
/// <param name="minValue">Минимально допустимое значение.</param>
/// <param name="maxValue">Максимально допустимое значение.</param>
void CheckValue(int value, int minValue, int maxValue);


/// <summary>
/// Проверяет делитель на равенство нулю.
/// </summary>
/// <param name="value">Значение.</param>
void CheckZero(int value);


#endif _validation_hpp_
