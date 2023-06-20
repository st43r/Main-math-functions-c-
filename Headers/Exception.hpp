#ifndef _exception_hpp_
#define _exception_hpp_

#include <exception>

/// <summary>
/// Исключение при делителе равном нулю.
/// </summary>
struct DivideByZeroException : public std::exception
{
	const char* message() const throw ()
	{
		return "Dividing by zero exception!\n";
	}
};


#endif _exception_hpp_
