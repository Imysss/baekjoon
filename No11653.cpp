#include<iostream>
#include<math.h>
using namespace std;

bool CheckPrimeNum1(int num)
{
	if (num == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

void No11653()
{
	int N, i = 2;
	cin >> N;
	int tmp = N;

	while(i<=N)
	{
		if (CheckPrimeNum1(i)) //家荐老 版快
		{
			if (tmp%i == 0) //距荐老 版快
			{
				cout << i << endl;
				tmp = tmp / i;

				if (tmp == 1) break;
			}
			else
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
}

void Short_No11653()
{
	int N, i = 2;
	cin >> N;
	
	for (int i = 2; i <= N; i++)
	{
		while (N%i == 0)
		{
			cout << i << endl;
			N = N / i;
		}
	}
}