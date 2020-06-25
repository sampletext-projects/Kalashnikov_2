#include <iostream>

using namespace std;

void main()
{
	double a, b, c, e;
	double fa, fc;

	cin >> a;
	cin >> b;
	cin >> e;

	int i = 0;
	fa = sqrt(1 - 0.4 * a * a) - asin(a);
	c = (a + b) / 2;
	fa = sqrt(1 - 0.4 * c * c) - asin(c);

	while (fabs(a - b) >= e)
	{
		if (fa * fc > 0)
		{
			a = c;
			fa = sqrt(1 - 0.4 * a * a) - asin(a);
		}
		else
		{
			b = c;
		}
		c = (a + b) / 2;
		fa = sqrt(1 - 0.4 * a * a) - asin(a);
		i = i + 1;
	}
	cout << "x= " << c << endl;
	system("pause");
}
