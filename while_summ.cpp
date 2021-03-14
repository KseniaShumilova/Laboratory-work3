#include <iostream>
#include <cmath>
using namespace std;
namespace whileLoop
{
    double summ(int n)
    {
        int i = 0;
        double sum = 0;
        while (i <= (n - 1))
        {
            sum += pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
            i++;
        }
        return sum;
    }
}