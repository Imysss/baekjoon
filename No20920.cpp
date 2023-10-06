#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool cmp20920(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second == b.second && a.first.length() == b.first.length())
	{
		return a.first < b.first;
	}
	else if (a.second == b.second)
	{
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}
void No20920()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M; //N: 입력받을 단어 개수, M: 단어장에 적을 단어의 길이 최소값
	string str;
	map<string, int> m;
	
	cin >> N >> M;
	
	while (N--)
	{
		cin >> str;
		if (str.length() >= M) //M 이상의 길이를 가진 단어만 취급
		{
			if (m.find(str) == m.end())//중복이 아니라면
			{
				m.insert({ str, 1 });
			}
			else
			{
				m[str]++;
			}
		}
	}

	vector<pair<string, int>> vc(m.begin(), m.end());

	sort(vc.begin(), vc.end(), cmp20920);
	
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i].first << "\n";
	}
	
}


map<string, int> c;
bool comp20920(const string &a, const string &b) 
{
	if (c[a] != c[b]) return c[a] > c[b];
	if (a.size() != b.size()) return a.size() > b.size();
	return a < b;
}
void Short20920()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for (auto &i : v) 
		cin >> i, c[i]++;
	sort(v.begin(), v.end()); //벡터 sort
	v.erase(unique(v.begin(), v.end()), v.end()); //벡터에 중복 삭제
	sort(v.begin(), v.end(), comp20920); //map에 있는 int(중복 횟수)에 따라 벡터 정렬 수행
	for (auto &i : v) 
		if (i.size() >= m) 
			cout << i << '\n';
}