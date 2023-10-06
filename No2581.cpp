#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

bool CheckPrimeNum(int num)
{
	if (num == 1)
	{
		return false;
	}
	for (int i = 2; i <= num / 2; i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

void No2581()
{
	int M, N;
	cin >> M >> N;

	int sum = 0;
	bool first = true;
	int first_num;
	for (int i = M; i <= N; i++)
	{
		if (CheckPrimeNum(i))
		{
			sum += i;
			
			if (first)
			{
				first_num = i;
				first = false;
			}
		}
	}
	
	if (sum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum << endl << first_num;
	}
}

void Short2581()
{
	int M, N, i, j, cnt = 0, sum = 0, min;
	scanf("%d %d", &M, &N);
	for (i = N; i >= M; i--) 
	{
		cnt = 0;
		for (j = 1; j <= i; j++) 
		{
			if (i%j == 0) //소수는 두 개밖에 안 나옴 (1과 자기 자신)
				cnt++;
		}
		if (cnt == 2) 
		{
			sum += i;
			min = i;
		}
	}
	if (sum == 0) 
		printf("-1");
	else 
		printf("%d\n%d", sum, min);
}