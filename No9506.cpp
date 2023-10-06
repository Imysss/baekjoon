#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No9506()
{
	string result;
	while (1)
	{
		int N, sum=0, cnt = 0, divisor[10000];
		cin >> N;
		if (N == -1)
			break;
		for (int i = 1; i <= N/2; i++)
		{
			if (N%i == 0)
			{
				divisor[cnt++] = i;
				sum += i;
			}
		}
		if (sum == N)
		{
			cout << N << " = ";
			for (int i = 0; i < cnt-1; i++)
			{
				cout << divisor[i] << (i == cnt - 2 ? "\n" : " + ");
			}
		}
		else
		{
			cout << N << " is NOT perfect." << endl;
		}
	}
	
}

void Short9506()
{
	int n, sum, count;
	int arr[1000];
	while (1) 
	{
		scanf("%d", &n);
		count = 0, sum = 0;
		if (n == -1) 
			break;
		for (int i = 1; i <= n / 2; i++) 
		{
			if (n % i == 0) 
				arr[count++] = i, sum += i;
		}
		if (n == sum) 
		{
			printf("%d = %d ", n, arr[0]);
			for (int i = 1; i < count; i++)
			{
				printf("+ %d ", arr[i]);
			}
		}
		else 
			printf("%d is NOT perfect.", n);
		printf("\n");
	}
}
