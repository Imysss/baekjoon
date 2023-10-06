#include<iostream>
#include<stack>
using namespace std;

void No10773()
{
	int K, a, sum = 0;
	stack<int> stk;
	cin >> K;
	while (K--)
	{
		cin >> a;
		if (a == 0)
		{
			stk.pop();
		}
		else
		{
			stk.push(a);
		}
	}

	while(!stk.empty())
	{
		sum += stk.top();
		stk.pop();
	}

	cout << sum;
}