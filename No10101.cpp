#include<iostream>
using namespace std;

void No10101()
{
	int alpha, beta, gamma;
	cin >> alpha >> beta >> gamma;

	if ((alpha + beta + gamma) == 180)
	{
		if (alpha == beta && alpha == gamma)
			cout << "Equilateral";
		else if (alpha == beta || alpha == gamma || beta == gamma)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
	{
		cout << "Error";
	}
}