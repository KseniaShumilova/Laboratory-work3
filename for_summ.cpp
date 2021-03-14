#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop
{
    double summ(int n)
    {
        double sum = 0;
        for (int i = 0; i <= (n - 1); ++i)
        {
            sum += pow(-1, i) * (1 - (pow(2, i)) / ((pow(2, i) + 1)));
        }
        return sum;
    }
}