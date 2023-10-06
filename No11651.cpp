#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No11651()
{
	int N;
	vector<pair<int, int>> vc;
	int a, b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%d", &a, &b);
		vc.push_back({ b, a });
	}

	sort(vc.begin(), vc.end());

	for (int i = 0; i < vc.size(); i++)
	{
		printf("%d %d\n", vc[i].second, vc[i].first);
	}
}