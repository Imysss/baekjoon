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
	
	//�ܾ� �ϳ��� �и�
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
				if (s[j] != s[j - 1] && s[j] == s[k]) //�ٷ� ������ �ٸ� �����̸鼭 �� ������ ������ �� ������ ���ڰ� ������ false ���
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

