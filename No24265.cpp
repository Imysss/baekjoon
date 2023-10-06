#include<iostream>
using namespace std;

int MenOfPassion24265(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			sum += (A[i] * A[j]);
		}
	}
	return sum;
}
void No24265()
{
	long long int N;
	cin >> N;

	cout << (N*(N - 1))/2 << endl << 2 << endl;
}