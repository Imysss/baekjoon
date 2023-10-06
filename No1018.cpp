#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int CountBoard(char **board, int t, int k)
{
	int cnt_w = 0, cnt_b = 0; //cnt_w¿Í cnt_b·Î ³ª´­ ÇÊ¿ä ¾øÀÌ cnt_w°¡ 64-cnt_wº¸´Ù Å©¸é 64-cnt_w¸¦ Ãâ·ÂÇÏ¸é µÊ
	for (int i = t; i < 8 + t; i++)
	{
		for (int j = k; j < 8 + k; j++)
		{
			if ((i - t) % 2 == 0 && (j - k) % 2 == 0) //Â¦Â¦
			{
				if (board[i][j] != 'W')
				{
					cnt_w++;
				}
			}

			else if ((i - t) % 2 == 0 && (j - k) % 2 != 0) //Â¦È¦
			{
				if (board[i][j] != 'B')
				{
					cnt_w++;
				}
			}
			else if ((i - t) % 2 != 0 && (j - k) % 2 == 0) //È¦Â¦
			{
				if (board[i][j] != 'B')
				{
					cnt_w++;
				}
			}
			else if ((i - t) % 2 != 0 && (j - k) % 2 != 0) //È¦È¦
			{
				if (board[i][j] != 'W')
				{
					cnt_w++;
				}
			}
		}
	}
	for (int i = t; i < 8 + t; i++)
	{
		for (int j = k; j < 8 + k; j++)
		{
			if ((i - t) % 2 == 0 && (j - k) % 2 == 0) //Â¦Â¦
			{
				if (board[i][j] != 'B')
				{
					cnt_b++;
				}
			}

			else if ((i - t) % 2 == 0 && (j - k) % 2 != 0) //Â¦È¦
			{
				if (board[i][j] != 'W')
				{
					cnt_b++;
				}
			}
			else if ((i - t) % 2 != 0 && (j - k) % 2 == 0) //È¦Â¦
			{
				if (board[i][j] != 'W')
				{
					cnt_b++;
				}
			}
			else if ((i - t) % 2 != 0 && (j - k) % 2 != 0) //È¦È¦
			{
				if (board[i][j] != 'B')
				{
					cnt_b++;
				}
			}
		}
	}
	return (cnt_w>cnt_b?cnt_b:cnt_w);
}
void No1018()
{
	int N, M;
	cin >> N >> M;

	char **board = new char*[N];
	for (int i = 0; i < N; i++)
	{
		board[i] = new char[M];
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
		}
	}

	vector<int> cnt;
	for (int t = 0; t <= N - 8; t++)
	{
		for (int k = 0; k <= M - 8; k++)
		{
			cnt.push_back(CountBoard(board, t, k));
		}
	}
	sort(cnt.begin(), cnt.end());
	cout<<cnt.front();
	
}

void Short1018()
{
	int m, n, ans = 64;
	scanf("%d %d", &n, &m);
	char a[51][51] = { 0, };
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	for (int i = 0; i + 8 <= n; i++) 
	{
		for (int j = 0; j + 8 <= m; j++) 
		{
			int cnt = 0;
			for (int k = i; k <= i + 7; k++) 
			{
				for (int l = j; l <= j + 7; l++) 
				{
					if (((k - i + l - j) % 2 == 0 && a[k][l] == 'W') || ((k - i + l - j) % 2 == 1 && a[k][l] == 'B')) 
						cnt++;
				}
			}
			if (cnt < ans) 
				ans = cnt;
			if (64 - cnt < ans) 
				ans = 64 - cnt;
		}
	}
	cout << ans << "\n";
}