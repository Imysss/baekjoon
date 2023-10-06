#include<iostream>
using namespace std;

void No2292()
{
	int N;
	int cnt = 0;

	cin >> N;
	while (N>0)
	{
		N -= (cnt == 0 ? 1 : (cnt * 6));
		cnt++;
	}
	cout << cnt;
}

void Short2292()
{
	int n, a = 0; 
	cin >> n; 
	while (3 * a++*a < n - 1);  // 0, 1~6(6), 7~18(12)으로 간주
	cout << a;
}