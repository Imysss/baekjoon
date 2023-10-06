#include<iostream>
using namespace std;

void No19532()
{
	int a, b, c, d, e, f;
	double x, y;
	cin >> a >> b >> c >> d >> e >> f;

	x = (e*c - b * f) / (a*e - b * d);
	y = (c*d - a * f) / (b*d - a * e);

	cout << x << " " << y;
}
