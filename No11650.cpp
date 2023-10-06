#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Point
{
	int x;
	int y;

	Point(int x, int y) :x(x), y(y) {}
};
bool compare(Point a, Point b) {
	if (a.x == b.x) 
	{ 
		return a.y < b.y;
	}
	else 
	{     
		return a.x < b.x;
	}

}
void No11650()
{
	int N;
	vector<Point> vc;
	int a, b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		vc.push_back(Point(a, b));
	}

	sort(vc.begin(), vc.end(), compare);

	for (int i = 0; i < vc.size(); i++)
	{
		printf("%d %d\n", vc[i].x, vc[i].y);
	}
}

void Short11650()
{
	int n;
	pair<int, int> p[100100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &p[i].first, &p[i].second);
	sort(p, p + n);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", p[i].first, p[i].second);
}