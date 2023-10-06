#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void No1193()
{
	int X;
	cin >> X;

	int cnt = 0, sum = 0;
	while ((X-=cnt++)>0)
	{
		sum += cnt;
	} //총 몇 번째인지 생각

	cnt--;
	
	int tmp = X + cnt - 1;
	if (cnt == 1)
	{
		cout << cnt << "/" << cnt;
	}
	else if(cnt%2!=0)
	{
		cout << cnt-tmp<< "/" << 1+tmp;
	}
	else
	{
		cout << 1 + tmp << "/" << cnt - tmp;
	}
}

void Short1193()
{
	int n = 0, m = 1; 
	scanf("%d", &n); 
	while (n > m)
	{
		n -= m++;
	}
	
	(m % 2 == 0) ? printf("%d/%d", n, m - n + 1) : printf("%d/%d", m - n + 1, n);
}
