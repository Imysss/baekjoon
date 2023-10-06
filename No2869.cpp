#include<iostream>
using namespace std;

void No2869()
{
	int A, B, V;
	cin >> A >> B >> V;

	int day = 1;
	if (A < V)
	{
		day += (V - B) / (A - B);
		if ((V - B) % (A - B) == 0)
			day--;
	}
	cout << day;
}
