#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop
{
	void print(int n, int k)
	{
		double a;
		for (int i = 0; i <= (n - 1); ++i)
		{
			if (i % k == (k - 1))
				continue;
			a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			cout << a << " ";
		}
		cout << endl;
	}
}