#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void No2745()
{
	string N; //수
	int B;  //진법

	cin >> N >> B;

	int len = N.length();
	long long int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (N[i] >=65)
		{
			sum+= ((N[i]-55)*pow(B, len-i-1));
		}
		else
		{
			sum += ((N[i]-48) * pow(B, len-i-1));
		}
	}

	cout << sum;
}

void Short2745()
{
	string s;
	int b, n = 0;
	cin >> s >> b;
	for (char c : s) 
	{
		n *= b; //뒤로 넘어가면서 계속 해당 진법을 곱해줌으로서 pow의 효과를 주는 것
		cout << "c: " << c << ", n: " << n << endl;
		if (c <= '9') //0~9까지
			n += c - '0';
		else //A~Z까지
			n += c - 'A' + 10;
	}
	cout << n;
}