#include<iostream>
#include<string>
using namespace std;

void No2720()
{
	int pay[4] = { 25, 10, 5, 1 };
	int T, C;
	int tmp;
	cin >> T;

	string result;
	while (T--)
	{
		cin >> C;
		for (int i = 0; i < 4; i++)
		{
			result += to_string(C / pay[i]);
			result += (i == 3 ? +"\n" : " ");
			C %= pay[i];
		}
	}
	cout << result;
}