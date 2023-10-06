#include<iostream>
#include<algorithm>
using namespace std;


void No1085()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	cout<<min(min(x, y), min(w - x, h - y));

}
