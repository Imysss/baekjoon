#include<iostream>
using namespace std;

int GetGCD1735(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GetGCD1735(b, a%b);
}

void No1735()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;


	int e = a * d + c * b;
	int f = b * d;

	int max = (e > f ? e : f);
	int min = (e <= f ? e : f);

	e /= GetGCD1735(max, min);
	f /= GetGCD1735(max, min);

	cout << e << " " << f;
}