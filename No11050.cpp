#include<iostream>
using namespace std;

int factorial11050(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int f(int n)
{
	return (n > 1 ? n * f(n - 1) : 1);
}

void No11050()
{
	int N, K;
	cin >> N >> K;
	cout << factorial11050(N) / (factorial11050(N - K)*factorial11050(K));
}