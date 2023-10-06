#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Poketmon
{
	string name;
	int num;
	Poketmon(string name, int num) :name(name), num(num) {}
};

vector<Poketmon> vc;

bool comp(Poketmon a, Poketmon b)
{
	return a.name < b.name;
}

bool is_digit(string str) 
{
	return (atoi(str.c_str()) != 0 || str.compare("0") == 0);
}

void Short_binary_search1620(int N, string b)
{
	int start = 0;
	int end = N - 1;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (vc[mid].name == b)
		{
			cout << vc[mid].num << "\n";
			return;
		}
		else if (vc[mid].name > b)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
}


void No1620()
{
	int N, M, cnt;
	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		vc.push_back(Poketmon(str, i+1));
	}

	vector<Poketmon> tmp(vc);
	sort(vc.begin(), vc.end(), comp);

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (is_digit(str))
		{
			int k = stoi(str);
			cout << tmp[k-1].name << "\n";
		}
		else
		{
			Short_binary_search1620(N, str);
		}
	}
}

void Short1620()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, cnt = 1;
	map<string, int> poketStr;
	map<int, string> poketNum;

	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		poketStr.insert(make_pair(str, cnt));
		poketNum.insert(make_pair(cnt++, str));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (str[0] < 'A')
		{
			int k = stoi(str);
			cout << poketNum[k] << "\n";
		}
		else
		{
			cout << poketStr[str] << "\n";
		}
	}
}
