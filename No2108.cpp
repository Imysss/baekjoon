#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void No2108()
{
	int N, k;
	int mid, most_num, range, avg;
	double sum = 0;
	int a[8001] = { 0 };
	vector<int> b;
	
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> k;
		sum += k;
		a[k + 4000]++;
		b.push_back(k);
	}
	sort(b.begin(), b.end());
	
	avg = round(sum / N );
	mid = b[N / 2];
	range = b[N - 1] - b[0];

	int most = -1;
	bool first = false;
	for (int i = 0; i < 8001; i++)
	{
		if (a[i]==most)
		{
			if (first)
			{
				most_num = i - 4000;
				first = false;
			}
		}
		if (a[i] > most)
		{
			most = a[i];
			most_num = i-4000;
			first = true;
		}
	}

	cout << avg << endl << mid << endl << most_num << endl << range;
}

void Short2108()
{
	//S sum
	//t 중복 횟수 확인
	//m 최빈값
	//b 가장 작은 최빈값인지 확인용
	//c 해당 원소 개수
	int N, A[500001], S = 0, t = 0, m = 0, b = 0, c = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", A + i); // cin>>A[i]와 동일함
		S += A[i];
	}
	sort(A, A + N);

	for (int i = 0; i < N; ++i) 
	{
		if (i < N - 1 && A[i] == A[i + 1]) //다음 원소와 같은 값을 가지고 있다면(중복이라면)
		{
			++c;
		}
		else 
		{
			if (t < c) 
			{
				t = c, m = A[i], b = 0;
			}
			else if (t == c && b == 0) 
			{
				m = A[i], b = 1;
			}
			c = 1;
		}
	}
	printf("%d\n", int(round(1.*S / N)));
	printf("%d\n", A[N / 2]);
	printf("%d\n", m);
	printf("%d\n", A[N - 1] - A[0]);
}