#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool GroupStringChecker(string str)
{
	int len;
	len = str.length();
	
	//단어 하나씩 분리
	vector<char> v;
	for (int i = 0; i < len; i++)
	{
		v.push_back(str[i]);
	}

	for (int i = 0; i < len; i++)
	{
		string checker;
		for (int j = i + 1; j < len; j++)
		{
			if (v[i] == v[j])
			{
				checker += "1";

			}
			else
			{
				checker += "0";
			}
		}
	
		while (checker.find("01") != string::npos)
		{
			return false;
		}
	}
	return true;
}
void No1316()
{
	int N;
	cin >> N;

	int cnt = 0;
	int checker = 0;
	while (cnt < N)
	{
		string str;
		cin >> str;
		if (GroupStringChecker(str))
		{
			checker++;
		}
		cnt++;
	}

	cout<< checker;
}

void Short1316()
{
	string s;
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> s;
		bool flag = true;
		for (int j = 0; j < s.length(); j++) 
		{
			for (int k = 0; k < j; k++)
			{
				if (s[j] != s[j - 1] && s[j] == s[k]) //바로 전과는 다른 문자이면서 더 이전과 비교했을 때 동일한 문자가 있으면 false 출력
				{
					flag = false;
					break;
				}
			}
		}
		if (flag) 
		{
			cnt++;
		}
	}
	cout << cnt;
}

