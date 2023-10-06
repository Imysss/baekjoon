#include<iostream>
using namespace std;

int MenOfPassion24266(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				sum += (A[i] * A[j] * A[k]);
			}
		}
	}
	return sum;
}
void No24266()
{
	long long int N;
	cin >> N;
	cout << N * N*N << endl << 3 << endl;
}