#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void No2903()
{
	int N; //Ƚ��
	cin >> N;
	long long int result;

	int cnt = 4; //�ʱ� ���� �� 4��

	result = pow(sqrt(pow(4, N)) + 1, 2);
	//result = pow(pow(2, N) + 1, 2);

	cout<<result;
}

void Short2903()
{
	int n;
	scanf("%d", &n);
	int l = (1 << n) + 1; //��Ʈ ������ (1<<n)�� 2^n��ŭ �þ
	printf("%d", l * l);
}