#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop
{
	int findFirstElement(double eps)
	{
		double a;
		int i;
		for (i = 0;; ++i)
		{
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			if (abs(a) <= eps)
				break;
		}
		return i;
	}
}