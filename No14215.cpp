#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No14215()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		if (a >= b + c) a = b + c - 1;
	}
	else if (b >= c)
	{
		if (b >= a + c) b = a + c - 1;
	}
	else
	{
		if (c >= a + b) c = a + b - 1;
	}
	cout << a + b + c;
}

void Short14215()
{
	vector<int> v(3);
	for (int& i : v) 
		cin >> i;
	sort(v.begin(), v.end());
	cout << v[0] + v[1] + min(v[0] + v[1] - 1, v[2]);
}