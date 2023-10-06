#include<iostream>
#include<string>
using namespace std;

void CheckPalindrome(string str)
{
	int len = str.length();
	int cnt = 0;
	while (cnt < len / 2)
	{
		if (str[cnt] == str[(len -1) - cnt])
		{
			//cout << str[cnt] << ", " << str[(len - 1) - cnt] << endl;
			cnt++;
		}
		else
		{
			cout << "0" << endl;
			return;
		}
	}
	cout << "1" << endl;
	return;
}
void No10988()
{
	string str;
	cin >> str;
	CheckPalindrome(str);
}

void Short10988()
{
	string s, rs;
	cin >> s;
	rs = s;

	reverse(rs.begin(), rs.end());

	if (s == rs) 
	{
		cout << '1';
	}
	else 
	{ 
		cout << '0'; 
	}
}

