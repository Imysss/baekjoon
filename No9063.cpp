#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No9063()
{
	int N;
	cin >> N;

	int x, y, max_x=-10000, max_y=-10000, min_x=10000, min_y=10000;
	int area;

	while (N--)
	{
		cin >> x >> y;
		max_x = max(max_x, x);
		max_y = max(max_y, y);
		min_x = min(min_x, x);
		min_y = min(min_y, y);
	}
	

	area = (max_x - min_x)*(max_y - min_y);
	cout << area;
}

void Short9063()
{
	int n; cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	sort(x.begin(), x.end());
	sort(y.begin(), y.end()); // 최소 최대를 한 번에 알 수 있음
	cout << (x[n - 1] - x[0])*(y[n - 1] - y[0]);
}
