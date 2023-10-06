#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No2587()
{
	vector<int> arr;
	int a, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		arr.push_back(a);
		sum += a;
	}
	sort(arr.begin(), arr.end());
	cout << sum / 5 << endl << arr[2];
}