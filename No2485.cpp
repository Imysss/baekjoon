#include<iostream>
using namespace std;

int GetGCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GetGCD(b, a%b);
}

void No2485()
{
	int N;
	int a[100001], b[100001];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		b[i] = a[i + 1] - a[i];
	}
	int gcd = GetGCD(b[0], b[1]);
	for (int i = 2; i < N; i++)
	{
		gcd = GetGCD(gcd, b[i]);
	}
	
	cout << ((a[N - 1] - a[0]) / gcd) + 1 - N;
}