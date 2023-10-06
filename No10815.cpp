#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n[500001];
int binary_search10815(vector<int> a, int b, int start, int end)
{
	if (start > end) 
	{
		return -1;
	}
	int mid = (start + end) / 2;

	if (a[mid] == b)
	{
		return 1;
	}
	else if (a[mid] > b)
	{
		return binary_search10815(a, b, start, mid - 1);
	}
	else
	{
		return binary_search10815(a, b, mid + 1, end);
	}
}

void Short_binary_search10815(int b, int N)
{
	int start = 0;
	int end = N - 1;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (n[mid] == b)
		{
			printf("1 ");
			return;
		}
		else if (n[mid] > b)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	printf("0 ");
}

void No10815()
{
	int N, M, a, b;
	vector<int> n;
	vector<int> m;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		n.push_back(a);
	}

	bool chk;
	cin >> M;
	while(M--)
	{
		chk = false;
		cin >> b;
		for (int j = 0; j < N; j++)
		{
			if (b == n[j])
			{
				chk = true;
				break;
			}
		}
		if (chk)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
}

void No10815_ver2()
{

	int N, M, a, b;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &n[i]);
	}
	sort(n, n+N);

	
	scanf("%d", &M);
	int result;
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &b);
		Short_binary_search10815(b, N); //이진 탐색 수행
	}
	
}
