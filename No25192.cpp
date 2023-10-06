#include<iostream>
#include<string>
#include<set>
using namespace std;

void No25192()
{
	int N, cnt=0;
	string str;
	set<string> s;
	cin >> N;
	while (N--)
	{
		cin >> str;
		if (str == "ENTER")
		{
			s.erase(s.begin(), s.end());
		}
		else
		{
			auto ret=s.insert(str);
			if (ret.second) //중복이 아닐 경우에만
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}

void Short25192()
{
	int n, ans = 0;
	string c;
	set<string>s;
	cin >> n;
	while (n--) 
	{
		cin >> c;
		if (c == "ENTER") 
		{
			ans += s.size();
			s.clear();
		}
		else 
		{
			s.insert(c);
		}
	}
	ans += s.size();
	cout << ans;
}