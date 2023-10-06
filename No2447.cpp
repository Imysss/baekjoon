#include<iostream>
#include<string>
using namespace std;

void Star10(int i, int j, int N)
{
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1) 
	{
		if (N == 27)
		{
			cout << "27";
		}
		if (N == 9)
		{
			cout << "9";
		}
		else if (N == 3)
		{
			cout << "3";
		}
		else if (N == 1)
		{
			cout << "1";
		}
		//cout << ' ';
	}
	else
	{
		if (N / 3 == 0)
			cout << '*';
		else
			Star10(i, j, N / 3);
	}
}
void No2447()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Star10(i, j, N);
		}
		cout << "\n";
	}
}
