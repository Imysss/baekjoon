#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void No2750()
{
	int N, a;
	vector<int> arr;
	cin >> N;
	while (N!=0)
	{
		cin >> a;
		arr.push_back(a);
		N--;
	}

	sort(arr.begin(), arr.end());
	//arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}
