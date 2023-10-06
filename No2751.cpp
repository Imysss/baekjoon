#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr2751[1000000];
void No2751()
{
	int N, a;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr2751[i];
	}

	sort(arr2751, arr2751 + N);
	for (int i = 0; i < N; i++)
	{
		cout << arr2751[i] << '\n';
	}
}
