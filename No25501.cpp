#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int recursion_cnt=0;
int recursion(const char* s, int l, int r)
{
	recursion_cnt++;
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else
		return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s)
{
	printf("%d ", recursion(s, 0, strlen(s) - 1));
	int cnt = recursion_cnt;
	recursion_cnt = 0;
	return cnt;
}

void No25501()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		char str[1001];
		scanf("%s", str);
		printf("%d\n", isPalindrome(str));
	}
}

