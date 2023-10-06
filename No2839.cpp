#include<iostream>
using namespace std;

void No2839()
{
	int N;
	cin >> N;
	int cnt=0;
	while (N != 0)
	{
		if (N % 5 == 0)
		{
			cnt++;
			N -= 5;
		}
		else if (N % 3 == 0)
		{
			cnt++;
			N -= 3;
		}
		else if (N / 5 > 0)
		{
			cnt++;
			N -= 5;
		}
		else if (N / 3 > 0)
		{
			cnt++;
			N -= 3;
		}
		else
		{
			cnt = -1;
			break;
		}
	}
	cout << cnt;
}

void Short2839()
{
	int a, b = 0, c;
	cin >> a;
	while (a % 5 != 0)
	{
		a = a - 3;
		b++;
	}
	if (a >= 0)
		printf("%d", b + a / 5);
	else
		printf("-1");
}