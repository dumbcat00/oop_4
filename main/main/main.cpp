#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, n, m;
	int flag;
	flag = 0;
	cout << "enter a and b\n";
	cin >> a >> b;
	//a = 4.8; b = -7.9;

	if (a >= b)
		n = cbrt(a - b);
	else if (a < b and a != 0 and b != 0)
		n = pow(a, 2) + (a - b) / (sin(a * b));
	else 
		flag=1;
	if (!flag and pow(sin(a), 2) - cos(n) < 0)
		flag=1;

	if (!flag) {

		if ((n < b) and (b != 0))
			m = ((n + a) / (-b)) + sqrt(pow(sin(a), 2) - cos(n));
		else if (n == b)
			m = b * b + tan(n * a);
		else
			m = pow(b, 3) + n * pow(a, 2);
	}
	else
		cout << "error";
	if (!flag)
		cout << "a=" << a << "\nb=" << b << "\nn=" << n << "\nm=" << m;

	return 0;
}