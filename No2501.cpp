#include<iostream>
using namespace std;

void No2501()
{
	int N, K;
	int i=1, cnt = 0;
	cin >> N >> K;
	while (i<=N)
	{
		if (N%i == 0)
			cnt++;
		if (cnt == K)
		{
			cout << i;
			break;
		}
		i++;
	}
	if (cnt < K)
		cout << "0";
}

void Short2501()
{
	int a, b, c = 0;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0 && b == ++c) 
		{
			cout << i;
			return;
		}
	}
	cout << 0;
}