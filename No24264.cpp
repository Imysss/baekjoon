#include<iostream>
#include<math.h>
using namespace std;

int MenOfPassion24264(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			sum += (A[i] * A[j]);
	}
	return sum;
}
void No24264()
{
	long long int N;
	cin >> N;

	cout << N * N << endl << 2 << endl;
}
