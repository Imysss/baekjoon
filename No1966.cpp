#include<iostream>
#include<queue>
using namespace std;

void No1966()
{
	int T, N, M, k;
	int cnt = 0;
	cin >> T;
	while (T--)
	{
		cin >> N >> M;

		cnt = 0;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < N; i++)
		{
			cin >> k;
			q.push({ i, k });
			pq.push(k);
		}

		while (!q.empty())
		{
			int idx = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value)
			{
				pq.pop();
				cnt++;
				if (idx == M)
				{
					cout << cnt << endl;
					break;
				}
			}
			else
			{
				q.push({ idx, value });
			}
		}
	}
}