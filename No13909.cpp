#include<iostream>
#include<math.h>
using namespace std;

void No13909()
{
	int N, i = 1;
	cin >> N;
	while (i*i <= N)
	{
		i++;
	}
	cout << i - 1;
}