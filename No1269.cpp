#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

void No1269()
{
	int a, b, k, count;
	set<int> A, B;

	cin >> a >> b;
	count = a + b;
	for (int i = 0; i < a; i++)
	{
		cin >> k;
		A.insert(k);
	}
	for (int i = 0; i < b; i++)
	{
		cin >> k;
		B.insert(k);
		if (A.find(k) != A.end())
		{
			count--;
		}
	}
	for (set<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		if (B.find(*it) != B.end())
		{
			count--;
		}
	}
	cout << count;
}

void Short1269()
{
	map<int, int> h;
	int n, m, x, cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n + m; i++)
	{
		scanf("%d", &x);
		if (++h[x] == 2)
			cnt++;
	}
	printf("%d", n + m - 2 * cnt);
}