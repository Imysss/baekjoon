#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void No2903()
{
	int N; //횟수
	cin >> N;
	long long int result;

	int cnt = 4; //초기 상태 점 4개

	result = pow(sqrt(pow(4, N)) + 1, 2);
	//result = pow(pow(2, N) + 1, 2);

	cout<<result;
}

void Short2903()
{
	int n;
	scanf("%d", &n);
	int l = (1 << n) + 1; //비트 연산자 (1<<n)은 2^n만큼 늘어남
	printf("%d", l * l);
}