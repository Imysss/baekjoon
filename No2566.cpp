#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void No2566()
{
	int k;
	int max_num=-1, max_i = 0, max_j = 0; //max_num=0이면 모두 0일 때 문제가 생길 수 있음

	for (int i=0; i < 9; i++)
	{
		for (int j=0; j < 9; j++)
		{
			cin >> k;
			
			if (max_num < k)
			{
				max_num = k;
				max_i = i+1;
				max_j = j+1;
			}
		}
	}
	cout << max_num << endl << max_i << " " << max_j;
}

void Short2566()
{
	int r = -1, x, y, z;
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++) 
		{ 
			scanf("%d", &z); 
			if (r < z)
				r = z, y = i, x = j; 
		}
	printf("%d\n%d %d", r, y, x);
}
