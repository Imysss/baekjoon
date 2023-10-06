#include<iostream>
#include<string>
#include<deque>
using namespace std;

void No5430()
{
	int T;
	cin >> T;
	while (T--)
	{
		string p, str, str_tmp;
		int n, k;
		deque<int> d;
		bool error = false;

		cin >> p >> n >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ',' && str[i] != '[' && str[i] != ']')
			{
				str_tmp += str[i];
			}
			else if (str_tmp != "")
			{
				d.push_back(stoi(str_tmp));
				str_tmp.clear();
			}
		}
		
		int R_cnt = 0;
		for (int i = 0; i < p.size(); i++)
		{
			if (p[i] == 'R')
			{
				R_cnt++;
			}
			else if (p[i] == 'D')
			{
				if (d.size() == 0)
				{
					error = true;
					cout << "error" << endl;
					break;
				}

				if (R_cnt % 2 == 0)
				{
					d.pop_front();
				}
				else
				{
					d.pop_back();
				}
			}
		}
		if (R_cnt % 2 == 0)
		{
			for (int i = 0; i < d.size(); i++)
			{
				cout << (i == 0 ? "[" : "") << d[i] << (i != d.size() - 1 ? "," : "]\n");
			}
		}
		else
		{
			for (int i = 0; i < d.size(); i++)
			{
				cout << (i == 0 ? "[" : "") << d[d.size() - 1 - i] << (i != d.size() - 1 ? "," : "]\n");
			}
		}
		if (d.size() == 0 && error==false)
		{
			cout << "[]" << endl;
		}
	}

}
