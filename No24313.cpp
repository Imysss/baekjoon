#include<iostream>
using namespace std;

void No24313()
{
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	if (((c - a1)*n0 >= a0) && (c - a1) >= 0)
		cout << 1;
	else
		cout << 0;
	
}