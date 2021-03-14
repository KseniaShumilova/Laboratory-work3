#include <cmath>
#include <iostream>
using namespace std;
namespace forLoop
{
	double summ2(double eps)
	{
		double a, sum;
		sum = 0;
		for (int i = 0;; ++i)
		{
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			sum += a;
			if (abs(a) <= eps)
				break;
		}
		return sum;
	}
}