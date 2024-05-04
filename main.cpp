#include "Equation1.h"

int main()
{
	Equation1 eq;
	double x0 = 2;
	double x1 = 0;
	for(int i=0;i<10;i++)
	{
		x1 = eq.EquationSolve(x0);
		
		x0 = x1;
	}
}