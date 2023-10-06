#include<iostream>
using namespace std;

int factorial10872(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
void No10872()
{
	int n;
	cin >> n;
	cout << factorial10872(n);
}