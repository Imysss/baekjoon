#include<iostream>
using namespace std;

int B[100000001], cnt = 0;
void merge(int *A, int start, int mid, int end)
{
	int i = start, j = mid + 1, t = 1;
	int tmp[500001];
	while (i <= mid && j <= end)
	{
		if (A[i] <= A[j])
		{
			tmp[t++] = A[i++];
		}
		else
		{
			tmp[t++] = A[j++];
		}
	}
	while (i <= mid)
	{
		tmp[t++] = A[i++];
	}
	while (j <= end)
	{
		tmp[t++] = A[j++];
	}
	i = start, t = 1;
	while (i <= end)
	{
		B[cnt++] = tmp[t];
		A[i++] = tmp[t++];
	}
}

void merge_sort(int *A, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge_sort(A, start, mid);
		merge_sort(A, mid + 1, end);
		merge(A, start, mid, end);
	}
}

int A[500001];
void No24060()
{
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	merge_sort(A, 0, N - 1);

	if (cnt - 1 < K)
	{
		cout << -1;
	}
	else
	{
		cout << B[K - 1];
	}
}