#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void No10989()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int a;
	vector<int> arr;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void Short10989()
{
	int N, a;
	int arr[10001] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		arr[a]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n", i);
		}
		
	}
}