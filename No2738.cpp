#include<iostream>
using namespace std;

void No2738()
{
	int N, M;
	cin >> N >> M;

	int **A = new int*[N];
	int **B = new int*[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = new int[M];
		B[i] = new int[M];
	}

	int k;
	for (int i = 0; i < N; i++)
	{	
		for (int j = 0; j < M; j++)
		{
			cin >> k;
			A[i][j] = k;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> k;
			B[i][j] = k;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << endl;
	}
}

void Short2738()
{
	int n, m, z, i = 0, j = 0; 
	cin >> n >> m; 
	int v = n * m, a[10000]; 
	
	for (; i < v * 2; i++) //��� A�� B�� ���� ���� �� ���� a[] ��Ŀ� ����ֱ� 
	{ 
		cin >> z; 
		a[i%v] += z; 
	}

	for (; j < v; j++) 
	{ 
		cout << a[j] << ((j + 1) % m ? " " : "\n");  //���� ���� ������ "\n" �־��ֱ�
	}
}
