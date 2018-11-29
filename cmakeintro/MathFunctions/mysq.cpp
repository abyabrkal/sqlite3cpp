#include "MathFunctions.h"
#include <stdio.h>

// a hack square calculation using simple operations
double mysq(double x)
{
  if (x <= 0) {
    return 0;
  }

  double result;

  result = x * x;

  fprintf(stdout, "Computing square of %g to be %g\n", x, result);

  return result;
}
