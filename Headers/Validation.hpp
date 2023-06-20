#ifndef _validation_hpp_
#define _validation_hpp_


/// <summary>
/// ��������� <paramref name="value"/> �� ����������.
/// </summary>
/// <param name="value">��������.</param>
/// <param name="minValue">���������� ���������� ��������.</param>
/// <param name="maxValue">����������� ���������� ��������.</param>
void CheckValue(int value, int minValue, int maxValue);


/// <summary>
/// ��������� �������� �� ��������� ����.
/// </summary>
/// <param name="value">��������.</param>
void CheckZero(int value);


#endif _validation_hpp_