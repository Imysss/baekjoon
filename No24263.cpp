#include<iostream>
using namespace std;

int cnt = 0;
int MenOfPassion24263(int *A, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
		cnt++;
	}
	return sum;
}

void No24263()
{
	int A[500000] = { 0, };
	int n;
	cin >> n;

	MenOfPassion24263(A, n);
	cout << cnt << endl << "1" << endl;
}