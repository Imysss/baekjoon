#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;

int check17103[1000001] = { false };
void No17103()
{
	check17103[0] = check17103[1] = true;

	int T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (check17103[i] == false)
			{
				for (int j = i * i; j <= n; j += i)
				{
					check17103[j] = true;
				}
			}
		}

		int i = 2;
		int tmp = n;
		int cnt = 0;
		while (i <= (n / 2))
		{
			//cout << i << endl;
			if (!check17103[i])
			{
				tmp -= i;
				if (!check17103[tmp])
				{
					cnt++;
					tmp = n;
					i++;
				}
				else
				{
					tmp = n;
					i++;
				}
			}
			else
			{
				i++;
			}
		}
		cout << cnt << endl;
	}
}

int k[1000001] = {};
void Short17103()
{
	int n, m;

	for (int i = 2; i <= 1000000; i++) 
	{
		if (k[i] == 0) 
		{
			k[i] = 2; //소수는 2로 설정
			for (int j = 2; (i*j) <= 1000000; j++) 
				k[i*j] = 1;
		}
	}
	scanf("%d", &n);
	while (n--) 
	{
		scanf("%d", &m);
		int a = 1, b = m - 1, c = 0;
		while (a < b) 
		{
			a++;
			b--;
			if (k[a] + k[b] == 4) 
				c++;
		}
		printf("%d\n", c);
	}
}