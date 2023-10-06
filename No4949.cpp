#include<iostream>
#include<stack>
#include<string>
using namespace std;

void Short4949()
{
	string str;
	while (1)
	{
		getline(cin, str);
		if (str == ".")
			break;

		bool ans = true;
		stack<char> s;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			if (str[i] == ')')
			{
				if (s.empty() || s.top() == '[')
				{
					ans = false;
				}
				else
				{
					s.pop();
				}
			}
			if (str[i] == ']')
			{
				if (s.empty() || s.top() == '(')
				{
					ans = false;
				}
				else
				{
					s.pop();
				}
			}
		}
		cout << (s.empty() && ans ? "yes" : "no") << endl;
	}
}