#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void No2745()
{
	string N; //��
	int B;  //����

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
		n *= b; //�ڷ� �Ѿ�鼭 ��� �ش� ������ ���������μ� pow�� ȿ���� �ִ� ��
		cout << "c: " << c << ", n: " << n << endl;
		if (c <= '9') //0~9����
			n += c - '0';
		else //A~Z����
			n += c - 'A' + 10;
	}
	cout << n;
}