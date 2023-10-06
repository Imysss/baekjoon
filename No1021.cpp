#include<iostream>
#include<deque>
using namespace std;

void No1021()
{
	deque<int> d;
	int N, M, k, left, right, cnt = 0;
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
	{
		d.push_back(i);
	}

	while (M--)
	{
		cin >> k;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i] == k)
			{
				left = i;
				right = d.size() - i;
				break;
			}
		}
		if (left <= right)
		{
			while (1)
			{
				if (d.front() == k)
					break;
				d.push_back(d.front());
				d.pop_front();
			}
			cnt += left;
			d.pop_front();
		}
		else
		{
			while (1)
			{
				if (d.back() == k)
					break;
				d.push_front(d.back());
				d.pop_back();
			}
			cnt += right;
			d.pop_back();
		}
	}
	cout << cnt;
}
