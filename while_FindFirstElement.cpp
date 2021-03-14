#include <iostream>
#include <cmath>
using namespace std;
namespace whileLoop
{
	int findFirstElement(double eps)
	{
		double a;
		int i = 0;
		while (i <= numeric_limits<int>::max())
		{
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			if (abs(a) <= eps)
				break;
			else
				i++;
		}
		return i;
	}
}