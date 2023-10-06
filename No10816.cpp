#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void No10816()
{
	int N, M, a, b;
	vector<int> n;
	vector<int> m;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		n.push_back(a);
	}
	sort(n.begin(), n.end());

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> b;
		m.push_back(upper_bound(n.begin(), n.end(), b) - lower_bound(n.begin(), n.end(), b));
	}

	for (int i = 0; i < M; i++)
	{
		cout << m[i] << " ";
	}
}

int main()
{
	No10816();
}