#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

string Cantor4779(string str, int N)
{
	if (N == 0)
	{
		return "-";
	}
	int k = str.length() / 3;
	string str_a = str.substr(0, k);
	string str_b;
	string str_c = str.substr(str.length() - k - 1, k);

	for (int i = 0; i < k; i++)
	{
		str_b += ' ';
	}

	if (N - 1 != 0)
	{
		str_a = Cantor4779(str_a, N - 1);
		str_c = Cantor4779(str_c, N - 1);
	}

	string tmp = str_a + str_b + str_c ;
	return tmp;

}
void No4779()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		string str;
		for (int i = 0; i < pow(3, N); i++)
		{
			str += '-';
		}
		cout << Cantor4779(str, N) << "\n";
	}

}

void Cantor(int N)
{
	int size = pow(3, N - 1);
	if (N == 0)
	{
		cout << "-";
		return;
	}

	Cantor(N - 1);
	for (int i = 0; i < size; i++)
	{
		cout << " ";
	}
	Cantor(N - 1);
}

void Short4779()
{
	int N;
	while (cin >> N)
	{
		Cantor(N);
		cout << "\n";
	}
}