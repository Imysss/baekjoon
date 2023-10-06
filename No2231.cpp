#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No2231()
{
	int N, M;
	cin >> N;

	string num;
	int len;
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		num = to_string(i);
		len = num.length();
		for (int j = 0; j < len; j++)
		{
			sum += (num[j] - '0');
		}
		sum += i;

		if (sum == N)
		{
			cout << i;
			return;
		}
	}
	cout << 0;
}

void Short2231()
{
	int N, a, sum;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		a = i;
		sum = i;
		for (; a != 0; a /= 10)
		{
			sum += a % 10; //자리수 떼고 더해주는 것임
		}
		if (sum == N) 
		{
			a = i;
			break;
		}
	}
	printf("%d", a);
}