#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

void No7785()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	set<string> s;
	string name, exist;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> exist;
		if (exist == "enter")
		{
			s.insert(name);
		}
		else
		{
			s.erase(name);
		}
	}

	for (auto it=s.rbegin(); it!=s.rend(); it++)
		cout << *it << "\n";
}
