#include<iostream>
using namespace std;

void No24723()
{
	int n, result = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		result *= (2 * 1);
	}
	cout << result;
}

void Short24723()
{
	int n;
	cin >> n;
	cout << (1 << n); //2배씩 커지기 때문에 비트 옮겨주는 것만 하면 됨
}