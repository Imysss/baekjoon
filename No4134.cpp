#include<iostream>
#include<math.h>
using namespace std;

bool IsPrime4134(long long int num)
{
	if (num == 1 || num==0)
		return false;
	for (long long int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

void No4134()
{
	int K;
	long long int n;
	cin >> K;

	while (K--)
	{
		cin >> n;
		while (1)
		{
			if (IsPrime4134(n))
			{
				cout << n << "\n";
				break;
			}
			else
			{
				n++;
			}
		}
	}
}