#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No1157()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}


	int alpha_num[26] = { 0 };
	int index;
	for (int i = 0; i < str.length(); i++)
	{
		index = int(str[i]) - 65;
		alpha_num[index]++;
	}

	int max_num = 0;
	char max_char='A';
	for (int i = 0; i < 26; i++)
	{
		if (alpha_num[i] > max_num)
		{
			max_num = alpha_num[i];
			max_char = char(i + 65);
		}
	}

	int max_num_cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha_num[i] == max_num)
		{
			max_num_cnt++;
		}
	}

	if (max_num_cnt > 1)
	{
		cout << "?";
	}
	else
	{
		cout << max_char;
	}

}


void Short1157()
{
	string s;
	cin >> s;
	int a[26] = {}, m = 0, c = 0, i = 0;

	for (char i : s) 
	{
		if (i > 96)
			a[i - 97]++;
		else 
			a[i - 65]++;
	}

	for (; i < 26; i++) 
	{
		if (a[i] > m) 
		{ 
			m = a[i]; 
			c = i; 
		}
		else if (a[i] == m)
			c = -2; //물음표 출력
	}

	cout << char(c + 65);
}