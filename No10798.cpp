#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No10798()
{
	string str;
	string arr[5][15] = { "" };
	for (int i = 0; i < 5; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			arr[i][j] = str[j];
		}
	}

	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i][j];
		}
	}
}

void Short10798()
{
	int i, j;
	char a[5][15] = { '\0' };
	for (i = 0; i < 5; i++)
		scanf("%s", a[i]); //2차원 배열 중 하나의 열을 한 번에 넣어버리기 (for문 하나를 줄일 수 있음)
	for (i = 0; i < 15; i++)
		for (j = 0; j < 5; j++)
			if (a[j][i] != '\0')
				printf("%c", a[j][i]);
}
