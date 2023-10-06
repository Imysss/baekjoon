#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void No11866()
{
	int N, K;
	queue<int> q;
	vector<int> vc;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	cout << "<";
	while (q.size())
	{
		int x;
		for (int i = 1; i < K; i++)
		{
			x = q.front();
			q.pop();
			q.push(x);
		}
		cout << q.front();
		cout << (q.size() == 1 ? ">" : ", ");
		q.pop();
	}
}