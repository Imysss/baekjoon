#include<iostream>
#include<stack>
#include<string>
#include<vector>
using  namespace std;

void Short1874()
{
	int N, cnt = 1;
	vector<string> vc;
	stack<int> s;
	cin >> N;

	while (N--)
	{
		int x;
		cin >> x;
		
		while (cnt <= x)
		{
			vc.push_back("+");
			s.push(cnt);
			cnt++;
		}

		if (x == s.top())
		{
			s.pop();
			vc.push_back("-");
		}
		else
		{
			cout << "NO";
			return;
		}
	}

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << '\n';
	}
}
