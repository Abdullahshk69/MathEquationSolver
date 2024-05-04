#include "Equation1.h"
#include <math.h>
#include <iostream>
#include <iomanip>
#include <numbers>

double Equation1::EquationSolve(double x)
{
	double pi = 2 * acos(0.0);
	double x0 = (double)3 * cos(x) - x - (double)1;
	double x0_ = (double) - 3 * sin(x) - (double)1;
	double x1 = (double)(x - (x0 / x0_));

	std::cout << "x = " << std::setprecision(7) << x << std::endl;
	std::cout << "f(x) = " << std::setprecision(7) << x0 << std::endl;
	std::cout << "f'(x) = " << std::setprecision(7) << x0_ << std::endl;
	std::cout << "x1 = x - f(x)/f'(x) = " << std::setprecision(7) << x1 << std::endl;

	return x1;
}
