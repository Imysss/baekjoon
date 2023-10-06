#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void No5086()
{
	int A, B;
	while (1)
	{
		cin >> A >> B;
		if (A == B)
			break;
		else if (A%B == 0 && A / B > 0)
			cout << "multiple" << endl;
		else if (B%A == 0 && B / A > 0)
			cout << "factor" << endl;
		else
			cout << "neither" << endl;
	}
}

void Short5086()
{
	int x, y;
	while (1) 
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0) 
			break;
		printf("%s\n", (x%y == 0) ? "multiple" : ((y%x == 0) ? "factor" : "neither"));
	}
}
