#include <iostream>
#include <cmath>
using namespace std;
namespace DoWhileLoop
{
	void print(int n, int k)
	{
		double a;
		int i = 0;
		do
		{
			if (i % k == (k - 1))
			{
				++i;
				continue;
			}
			else
				a = pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
			cout << a << " ";
			++i;
		} while (i <= (n - 1));
		cout << endl;
	}
}