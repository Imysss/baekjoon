#include<iostream>
#include<queue>
using namespace std;

void No2164()
{
	int N;
	queue<int> q;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		q.pop();
		int k = q.front();
		q.pop();
		q.push(k);
	}
	cout << q.front();
}

void Short2164()
{
	int n, c = 1; 
	cin >> n; 
	while (c * 2 < n)
	{
		c *= 2;
	}
	printf("%d", n > 1 ? (n - c) * 2 : 1);
}
