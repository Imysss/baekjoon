#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string a[10001];

void No14425()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, cnt = 0;
	string b;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
	for (int i = 0; i < M; i++)
	{
		cin >> b;
		if (binary_search(a, a + N, b))
		{
			cnt++;
		}
	}
	cout << cnt;
}
