#include<iostream>
#include<deque>
#include<string>
using namespace std;

void No10866()
{
	int N, k;
	string str;
	deque<int> d;
	cin >> N;
	while (N--)
	{
		cin >> str;
		if (str == "push_front")
		{
			cin >> k;
			d.push_front(k);
		}
		else if (str == "push_back")
		{
			cin >> k;
			d.push_back(k);
		}
		else if (str == "pop_front")
		{
			if (!d.empty())
			{
				k = d.front();
				d.pop_front();
				cout << k << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (str == "pop_back")
		{
			if (!d.empty())
			{
				k = d.back();
				d.pop_back();
				cout << k << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (str == "size")
		{
			cout << d.size() << endl;
		}
		else if (str == "empty")
		{
			cout << (d.empty() ? 1 : 0) << endl;
		}
		else if (str == "front")
		{
			cout << (d.empty() ? -1 : d.front()) << endl;
		}
		else if (str == "back")
		{
			cout << (d.empty() ? -1 : d.back()) << endl;
		}
	}
}