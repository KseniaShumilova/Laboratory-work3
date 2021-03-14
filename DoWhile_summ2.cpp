#include <cmath>
#include <iostream>
using namespace std;
namespace DoWhileLoop
{
	double summ2(double eps)
	{
		double a, sum;
		int i = 0;
		a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
		sum = a;
		do
		{
			i++;
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			sum += a;
		} while (abs(a) >= eps);
		return sum;
	}
}