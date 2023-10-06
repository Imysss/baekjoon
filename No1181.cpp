#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
void No1181()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string str;
	vector<string> vc;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		vc.push_back(str);
	}
	sort(vc.begin(), vc.end(), compare);
	vc.erase(unique(vc.begin(), vc.end()), vc.end()); //중복 지우기

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << "\n";
	}
}

void Short1181()
{
	int n;
	cin >> n;
	string str;
	set<pair<int, string>>s;
	for (int i = 0; i < n; i++) 
	{
		cin >> str;
		s.emplace(str.size(), str);
	}

	for (auto ss : s) 
	{
		cout << ss.second << "\n";
	}
}