#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void No5073()
{
	int a, b, c;
	
	while (scanf("%d%d%d", &a, &b, &c), a != 0 && b != 0 && c != 0)
	{
		bool triangle_check = (a >= b && a >= c ? (a < b + c ? true : false) : (b >= c ? (b < a + c ? true : false) : (c < b + a ? true : false)));

		if (!triangle_check)
			cout << "Invalid" << endl;
		else if (a == b && a == c)
			cout << "Equilateral" << endl;
		else if (a == b || a == c || b == c)
			cout << "Isosceles" << endl;
		else
			cout << "Scalene" << endl;
	}
}

void Short5073()
{
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) break;

		if (a + b <= c || b + c <= a || c + a <= b) 
			cout << "Invalid";
		else if (a == b && b == c) 
			cout << "Equilateral";
		else if (a == b || b == c || c == a) 
			cout << "Isosceles";
		else 
			cout << "Scalene";
		cout << '\n';
	}
}