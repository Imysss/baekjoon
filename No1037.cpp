#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int n[1000001];
void No1037()
{
	int N, result, a;
	int min, max;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> n[i];
	}
	if (N == 1)
	{
		cout << n[0] * n[0];
	}
	else
	{
		min = *min_element(n, n + N);
		max = *max_element(n, n + N);
		cout << min * max;
	}
}

void Short1037()
{
	int n, t, m = 1000001, M = 0; 
	scanf("%d", &n);
	for (; n; --n) 
	{ 
		scanf("%d", &t); 
		m = t < m ? t : m; 
		M = t > M ? t : M; 
	}
	printf("%d", m*M);
}
