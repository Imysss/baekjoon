#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void No2798()
{
	int N, M;
	int tmp;
	vector<int> arr;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}

	int sum;
	vector<int> result;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i+1; j < N-1; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M)
				{
					result.push_back(sum);
				}
			}
		}
	}

	sort(result.begin(), result.end());

	cout << result.back() << endl;
}

void Short2798()
{
	int n, m, a[101], s = 0;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if (a[i] + a[j] + a[k] <= m && a[i] + a[j] + a[k] > s)
					s = a[i] + a[j] + a[k];
	printf("%d", s);
}
