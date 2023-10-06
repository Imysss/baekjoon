#include<iostream>
using namespace std;

int Fibonacci(int N)
{
	if (N == 0)
		return 0;
	else if (N == 1)
		return 1;
	return Fibonacci(N - 2) + Fibonacci(N - 1);
}
void No10870()
{
	int N;
	cin >> N;
	cout << Fibonacci(N);
}