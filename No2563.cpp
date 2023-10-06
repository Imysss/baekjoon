#include<iostream>
using namespace std;

void No2563()
{
	int arr[100][100] = { 0 };

	int N; //색종이 개수
	cin >> N;
	int n, m;
	int i, j;

	while (N--)
	{
		cin >> n >> m;

		for (i = n - 1; i < n + 9; i++)
		{
			for (j = m - 1; j < m + 9; j++)
			{
				arr[i][j] = 1;
			}
		}
	}

	int cnt = 0;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
			{
				cnt++;
			}
		}
	}

	cout << cnt;
}

void Short2563()
{
	int sum = 0, n, a, b, arr[101][101] = {};
	cin >> n;
	for (int i = 0; i < n; i++) //색종이 개수만큼
	{
		cin >> a >> b;
		for (int i1 = a; i1 < a + 10; i1++)
			for (int j = b; j < b + 10; j++)
				sum += (arr[i1][j]++ == 0);
	}
	cout << sum;
}
