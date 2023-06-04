#pragma once

#ifndef _exception_hpp_
#define _exception_hpp_

#include <iostream>

/// <summary>
/// ���������� ��� ������ �������.
/// </summary>
struct ArgumentNullException : public std::exception
{
	const char* message() const throw ()
	{
		return "Argument Null Exception!";
	}
};

#endif _exception_hpp_