#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

unsigned long int factorial(int n)
{
	return (n > 1 ? n * factorial(n - 1) : 1);
}
unsigned long int GetCombination(int n, int r)
{
	return factorial(n) / (factorial(n - r)*factorial(r));
}
void No1010()
{
	int T, N, M, r;
	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		
		int tmp = 1, result = 1;
		for (int i = N + 1; i <= M; i++)
		{
			result *= i;
			result /= tmp++;
		}
		cout << result << endl;
	}
}

void Short1010()
{
	int k, n, m, i, j, s; 
	scanf("%d", &k); 
	
	for (i = 0; i < k; i++) 
	{ 
		scanf("%d %d", &n, &m); 
		s = 1; 
		for (j = 0; j < n; j++) 
		{ 
			s *= m - j; 
			s /= j + 1; 
		}
		printf("%d\n", s); 
	}
}