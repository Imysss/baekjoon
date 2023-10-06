#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

void No1764()
{
	int N, M;
	set<string> s;
	set<string> result;
	string str;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (s.find(str) != s.end())
			result.insert(str);
	}

	cout << result.size() << "\n";
	for (set<string>::iterator it = result.begin(); it != result.end(); it++)
	{
		cout << *it << "\n";
	}
}