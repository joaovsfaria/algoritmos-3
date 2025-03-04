#include <iostream>
#include <cmath>

using namespace std;

double sqrt(double x, double x0, double e)
{

	if(abs(pow(x0, 2) - x) <= e)
	{
		return x0;
	}
	else
	{
		return sqrt(x, ((pow(x0, 2) + x) / (2 * x0)), e);
	}


}

int main()
{

	double x, x0, e, result;

	cin >> x >> x0 >> e;

	result = sqrt(x, x0, e);

	cout << result;

	return 0;
}
