#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void Basket(int *arr, int i, int j, int k)
{
	int cnt = 0;
	int *tmp = new int[j-i+1];


	//임시 배열에 앞으로 땡길 것 저장
	for (int q = (k - 1); q < j; q++)
	{
		tmp[cnt++] = arr[q];
	}
	//임시 배열에 뒤로 밀릴 것 저장
	for (int q = (i-1); q < (k-1); q++)
	{
		tmp[cnt++] = arr[q];
	}

	/*
	//임시 배열 출력
	cout << "tmp 크기: " << j - i + 1 << endl;
	cout << "tmp: ";
	for (int q = 0; q < cnt; q++)
	{
		cout << tmp[q] << " ";
	}
	cout << endl;
	*/

	//arr에 저장
	for (int q = 0; q < cnt; q++)
	{
		arr[i - 1 + q] = tmp[q];
	}

	/*
	//arr 출력
	cout << "arr: ";
	for (int q = 0; q < N; q++)
	{
		cout << arr[q] << " ";
	}
	cout << endl;
	*/
}

void No10812()
{
	int N, M;
	int cnt = 0;

	cin >> N >> M;

	int *arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}


	while (cnt < M)
	{
		int i, j, k;
		cin >> i >> j >> k;
		Basket(arr, i, j, k);
		cnt++;
	}

	//최종 배열 출력
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	delete[] arr;
}

void Short10812()
{
	int n, m, i, j, k;
	cin >> n >> m;

	vector<int> v(n);

	for (i = 0; i < n; i++)
		v[i] = i + 1;

	while (m--) 
	{
		cin >> i >> j >> k;
		rotate(v.begin() + i - 1, v.begin() + k - 1, v.begin() + j);
	}

	for (int& a : v) 
		cout << a << " ";
}