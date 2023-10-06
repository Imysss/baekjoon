#include<iostream>
#include<math.h>
using namespace std;

int GetGCD1934(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GetGCD1934(b, a%b);
}
void GetLCM1934(int a, int b)
{
	int max = (a > b ? a : b);
	int min = (a <= b ? a : b);
	cout << a * b / GetGCD1934(max, min) << endl;
}

void No1934()
{
	int T, a, b;
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		GetLCM1934(a, b);
	}
}