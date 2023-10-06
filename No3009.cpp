#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};

void No3009()
{
	Point rc[4];

	for (int i = 0; i < 3; i++)
	{
		cin >> rc[i].x >> rc[i].y;
	}

	rc[3].x = (rc[0].x == rc[1].x ? rc[2].x : (rc[0].x == rc[2].x ? rc[1].x : rc[0].x));
	rc[3].y = (rc[0].y == rc[1].y ? rc[2].y : (rc[0].y == rc[2].y ? rc[1].y : rc[0].y));

	cout << rc[3].x << " " << rc[3].y;
}


void Short3009()
{
	int w = 0, h = 0, x, y, i = 3;
	while (i--) 
	{
		scanf("%d%d", &x, &y);
		w ^= x; //비트(이진법)에서 다른 경우...
		h ^= y;

		cout << w << ", " << h << endl;
	}
	printf("%d %d", w, h);
}