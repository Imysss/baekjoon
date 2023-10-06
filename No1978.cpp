#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int CheckPrimeNum(int num)
{
	if (num == 1)
	{
		return 0;
	}
	for (int i = 2; i <= num / 2; i++)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;
}

void No1978()
{
	int N, arr[100], cnt = 0;
	int result = 0;
	cin >> N;

	while (cnt < N)
	{
		cin >> arr[cnt++];
	}
	
	for (int i = 0; i < cnt; i++)
	{
		result += CheckPrimeNum(arr[i]);
	}
	cout << result;
}

void Short1978()
{
	int T, x, C = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) 
	{
		scanf("%d", &x);
		if (x == 1) 
			C++;
		for (int j = 2; j < x; j++) 
			if (x%j == 0) 
			{ 
				C++; //소수가 아닐 때 C++을 수행 (한 번이라도 아니라면 break 걸어서 시간 줄임)
				break; 
			}
	}
	printf("%d", T - C);
}
