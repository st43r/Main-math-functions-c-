#include "Main-math-functions-c-++/main.hpp"

unsigned int rem (int a, int b)
{
  if (a - a / b * b >= 0)
    return a - a / b * b;
  else if ((a - a / b * b < 0) && (a / b < 0))
    return a - (a / b - 1) * b;
  else if ((a - a / b * b < 0) && (a / b > 0))
    return a - (a / b + 1) * b;
}
