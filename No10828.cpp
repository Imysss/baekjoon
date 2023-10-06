#include<iostream>
#include<string>
#include<stack>
using namespace std;

void No10828()
{
	int N, a;
	string str;
	stack<int> stk;

	cin >> N;
	while (N--)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> a;
			stk.push(a);
		}
		else if (str == "pop")
		{
			printf("%d\n", stk.size() == 0 ? -1 : stk.top());
			if (stk.size() != 0)
				stk.pop();
		}
		else if (str == "size")
		{
			cout << stk.size() << endl;
		}
		else if (str == "empty")
		{
			printf("%d\n", stk.size() == 0 ? 1 : 0);
		}
		else if (str == "top")
		{
			printf("%d\n", stk.size() == 0 ? -1 : stk.top());
		}
	}
}