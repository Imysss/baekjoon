#include<iostream>
using namespace std;

long long int GetGCD13241(long long int a, long long int b)
{
	if (b == 0)
		return a;
	else
		return GetGCD13241(b, a%b);
}
void GetLCM13241(long long int a, long long int b)
{
	long long int max = (a > b ? a : b);
	long long int min = (a <= b ? a : b);
	cout << a * b / GetGCD13241(max, min) << endl;
}

void No13241()
{
	long long int a, b;
	cin >> a >> b;
	GetLCM13241(a, b);
}