#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No25305()
{
	int N, k, a;
	vector<int> arr;

	cin >> N >> k;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cout << arr[N - k];
}

void Short25305()
{
	int n, m, x[1001];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", x + i);
	sort(x, x + n);
	printf("%d", x[n - m]);
}