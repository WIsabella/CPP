#include<iostream>
using namespace std;
double power(double x, int n)
{
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}
double fff(double x)
{
	int i = -1;
	double j = 1.0;
	double x1 = x;
	double xx = x * x;
	double key = power(10.0, -15);
	double result = 0.0;
	while (1)
	{
		if (x1/j > key)
		{
			i *= -1;
			result += i * x1/j;
			x1 *= xx;
			j += 2.0;
		}
		else
			break;
	}
	return result;
}
int main()
{
	double PI = 16 * fff(1 / 5.0) - 4 * fff(1.0 / 239);
	cout << PI;
	return 0;
}