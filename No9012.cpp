#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No9012()
{
	int T;
	string s;
	cin >> T;
	while (T--)
	{
		cin >> s;
		int chk = 0, i = 0;
		while (i < s.length())
		{
			if (s[i] == '(')
			{
				chk++;
			}
			else
			{
				chk--;
			}

			if (chk < 0)
			{
				break;
			}
			i++;
		}
		cout << (chk == 0 ? "YES" : "NO") << endl;
	}
}

void Short9012()
{
	char s[51];
	int N, t, i; 
	scanf("%d", &N);
	while (N--) 
	{
		t = i = 0; 
		scanf("%s", s);
		while (*(s + i) != 0) 
		{ 
			*(s + i++) == '(' ? ++t : --t; 
			if (t < 0)
				break; 
		}

		printf("%s\n", t ? "NO" : "YES");
	}
}