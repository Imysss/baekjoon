#include<iostream>
#include<string>
#include<map>
using namespace std;

void Short26069()
{
	int N, cnt = 0;
	string a, b;
	map<string, bool> m;
	cin >> N;

	while (N--)
	{
		cin >> a >> b;
		if (a == "ChongChong")
		{
			m.insert({ a, true });
		}
		else if (b == "ChongChong")
		{
			m.insert({ b, true });
		}

		if (m[a])
		{
			m[b] = true;
		}
		if (m[b])
		{
			m[a] = true;
		}
	}

	for (auto& val : m)
	{
		if (val.second)
			cnt++;
	}
	cout << cnt;

}