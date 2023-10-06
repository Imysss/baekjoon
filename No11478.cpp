#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

void No11478()
{
	string str;
	set<string> s;
	cin >> str;
	int len = str.length();

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			string tmp = str.substr(j, i + 1);
			s.insert(tmp);
		}
	}
	cout << s.size();
}