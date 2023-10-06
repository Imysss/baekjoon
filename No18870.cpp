#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No18870()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, a;
	vector<int> vc;
	vector<int> tmp;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		tmp.push_back(a);
		vc.push_back(a);
	}
	sort(tmp.begin(), tmp.end());
	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end()); //중복 지우기

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < tmp.size(); j++)
		{
			if (vc[i] == tmp[j])
			{
				cout << j << " ";
			}
		}
	}
}

void Short18870()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, a;
	vector<int> vc;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		vc.push_back(a);
	}

	vector<int> tmp(vc); //복사
	sort(tmp.begin(), tmp.end());
	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end()); //중복 지우기

	for (int i = 0; i < N; i++)
	{
		auto it = lower_bound(tmp.begin(), tmp.end(), vc[i]);
		cout << it - tmp.begin() << " ";
	}
}