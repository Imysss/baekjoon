#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;

bool IsPrime(int num)
{
	if (num == 1)
		return false;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

int check4948[1000001] = { false };
void No4948()
{
	int n;

	check4948[0] = true;
	check4948[1] = true;

	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		for (int i = 2; i <= sqrt(2 * n); i++)
		{
			if (check4948[i] == false)
			{
				for (int j = i * i; j <= 2*n; j += i)
				{
					check4948[j] = true;
				}
			}
		}
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (!check4948[i])
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}

void Short4948()
{
	int n, i = 2, k = 246913, a[246913];  
	for (; i*i < k; i++) //미리 에라토스테네스의 체를 최대 숫자만큼 구해놓고 사용
	{
		if (!a[i])
		{
			for (n = i * 2; n < k; n += i)
			{
				a[n] = 1;
			}
		}
	}
	while (scanf("%d", &n), n) 
	{ 
		k = 0; 
		for (i = n + 1; i <= 2 * n; i++)
			if (!a[i])
				k++; 
		printf("%d\n", k); 
	}
}