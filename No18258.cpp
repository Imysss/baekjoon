#include<iostream>
#include<queue>
#include<string>
using namespace std;

void No18258()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, k;
	string str;
	queue<int> q;
	cin >> N;

	while (N--)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> k;
			q.push(k);
		}
		else if (str == "front")
		{
			cout << (q.empty() ? -1 : q.front()) << '\n';
		}
		else if (str == "back")
		{
			cout << (q.empty() ? -1 : q.back()) << '\n';
		}
		else if (str == "size")
		{
			cout << q.size() << '\n';
		}
		else if (str == "empty")
		{
			cout << (q.empty() ? "1" : "0") << '\n';
		}
		else if (str == "pop")
		{
			cout << (q.empty() ? -1 : q.front()) << '\n';
			if (!q.empty()) q.pop();
		}

	}
}