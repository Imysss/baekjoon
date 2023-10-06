#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void No1427()
{
	int a, arr[10] = { 0, };
	string N;
	cin >> N;

	for (int i = 0; i < N.length(); i++)
	{
		a = N[i] - '0';
		arr[a]++;
	}

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i;
		}
	}
}

void Short1427()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end(), greater<>());
	cout << s;
}