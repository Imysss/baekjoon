#include<iostream>
using namespace std;

int MenOfPassion24267(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			for (int k = j; k < n; k++)
			{
				sum += (A[i] * A[j] * A[k]);
			}
		}
	}
	return sum;
}
void No24267()
{
	long long int N;
	cin >> N;
	N -= 2;

	cout << (((N*(N + 1)*(2 * N + 1)) / 6) + ((N*(N + 1) / 2))) / 2 << endl << 3 << endl;
}

void Short24267()
{
	long long int N;
	cin >> N;
	cout << (N*(N - 1)*(N - 2) / 6) << endl << 3 << endl;
}
