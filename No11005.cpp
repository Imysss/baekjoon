#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void No11005()
{
	int N; //input - 10진법 수 
	int B; //진법
	string result;

	cin >> N >> B;

	while (N > 0)
	{
		result += ((N%B) > 9 ? char((N%B) + 55) : (N%B)+'0');
		N = N / B;
	}
	reverse(result.begin(), result.end());

	cout << result << endl;
}

void Short11005()
{
	int n, m, k;
	string s;
	cin >> n >> m;

	while (n) {
		k = n % m; //나머지 구하기
		n -= k;
		n /= m; //몫이 존재하는지 확인하는 용도
		s.push_back(k > 9 ? 'A' + k - 10 : '0' + k); //벡터에 넣어서 뒤에서부터 읽어오기
	}

	n = s.size();
	while (n--) cout << s[n];
}
