#include <iostream>
#include <cmath>
using namespace std;
namespace whileLoop
{
	int findNegativeFirstElement(double eps)
	{
		double a;
		int i = 0;
		do {
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			if (a < 0 && abs(a) <= eps)
				return i;
			else i++;
		} while (i <= numeric_limits<int>::max());
	}
}