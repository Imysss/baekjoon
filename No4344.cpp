#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;

void GetAverage(double *avg, int num)
{
	int N;
	cin >> N;

	int *arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	//학생 평균 계산
	int sum=0;
	double case_avg;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	case_avg = sum / N;

	//평균을 넘는 학생 계산
	double avg_over_cnt = 0;
	double avg_over_avg;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > case_avg)
		{
			avg_over_cnt++;
		}
	}
	avg_over_avg = (avg_over_cnt / N)*100;
	//세자리수까지 반올림
	avg_over_avg *= 1000;
	avg_over_avg = round(avg_over_avg);
	avg_over_avg /= 1000;
	avg[num] = avg_over_avg;
}

void No4344()
{
	int C;
	cin >> C;
	
	double *avg = new double[C];
	int cnt = 0;
	while (cnt < C)
	{
		GetAverage(avg, cnt);
		cnt++;
	}

	//최종 출력
	for (int i = 0; i < C; i++)
	{
		cout << fixed;
		cout.precision(3);
		cout << avg[i] << "%" << endl;
	}
}

void Short4344()
{
	int c, n, x[1001];
	scanf("%d", &c);
	while (c--)
	{
		double h = 0, a = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x[i]);
			h += x[i];
		}
		h /= n;  //평균 계산
		for (int i = 0; i < n; i++) 
			if (x[i] > h)  //평균 넘는 사람 계산
				a++;
		a /= n;
		printf("%.3lf%%\n", a * 100);
	}
}
