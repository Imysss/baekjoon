#include<iostream>
#include<string>
#include <regex>
using namespace std;


void No2941()
{
	string hrvatski[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string str;
	int pos;

	cin >> str;

	for (int i = 0; i < 8; i++)
	{
		while (str.find(hrvatski[i])!=string::npos)
		{
			pos = str.find(hrvatski[i]);
			str.replace(pos, hrvatski[i].length(), "#"); //�ش� ���ڿ��� #���� �����Ͽ� ���ڿ��� ũ�� ���
		}
	}

	cout << str.length() << endl;
}

void Short2941()
{
	string s;
	cin >> s;
	s = regex_replace(s, regex("c=|c-|dz=|d-|lj|nj|s=|z="), ".");
	cout << s.length();
}
