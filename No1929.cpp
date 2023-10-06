#include<iostream>
#include<math.h>
using namespace std;

bool IsPrime1929(long long int num)
{
	if (num == 1)
		return false;
	for (long long int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

void No1929()
{
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (IsPrime1929(i))
		{
			cout << i << "\n";
		}
	}
}

//에라토스테네스의 체를 사용하여 소수를 구하는 문제
int check1929[1000001] = { false };
void No1929_ver2()
{
	int M, N;
	cin >> M >> N;

	check1929[0] = true;
	check1929[1] = true;
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (check1929[i] == false)
		{
			for (int j = i * i; j <= N; j += i)
			{
				check1929[j] = true;
			}
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (!check1929[i])
			cout << i << "\n";
	}
}
