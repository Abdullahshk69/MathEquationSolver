#include "Equation1.h"
#include <math.h>
#include <iostream>
#include <iomanip>

void Equation1::EquationSolve(double x)
{
	double x0 = (double)3 * cos(x/180.0) - x - (double)1;
	double x0_ = (double) - 3 * sin(x / 180.0) - (double)1;

	
	std::cout << std::setprecision(7)<< (double)(x - (x0 / x0_));
}
